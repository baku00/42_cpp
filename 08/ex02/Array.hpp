#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

	private:
		unsigned int	_size;
		T				*_array;

	public:
		Array( void ) : _size(0), _array(NULL) {}
		Array( unsigned int n ) : _size(n), _array(new T[n]) {}
		Array( Array const & src ) : _size(src._size), _array(new T[src._size]) {
			for (unsigned int i = 0; i < src._size; i++)
				_array[i] = src._array[i];
		}
		~Array( void ) {
			if (_array)
				delete [] _array;
		}

		Array & operator=( Array const & rhs ) {
			if (this != &rhs) {
				if (_array)
					delete [] _array;
				_size = rhs._size;
				_array = new T[rhs._size];
				for (unsigned int i = 0; i < rhs._size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}

		T & operator[]( unsigned int n ) {
			if (n >= _size)
				throw std::exception();
			return _array[n];
		}

		unsigned int size( void ) const {
			return _size;
		}
};

#endif

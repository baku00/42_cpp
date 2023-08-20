#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array {

	private:
		unsigned int	_size;
		T				*_array;

		class OutOfRangeIndex : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("index out of array"); }
		};

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
			try
			{
				if (n >= _size)
					throw OutOfRangeIndex();
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				exit(1);
			}
			return _array[n];
		}

		unsigned int size( void ) const {
			return _size;
		}
};

template<typename T>
std::ostream	& operator<<(std::ostream & out, Array<T> const & instance)
{
	out << "Array of " << instance.size() << " elements";
	return out;
}

#endif

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
			typedef typename std::stack<T>::container_type::iterator iterator;

			iterator begin() {
				return iterator(this->c.begin());
			}

			iterator end() {
				return iterator(this->c.end());
			}

			MutantStack<T>	&operator=(const MutantStack<T> &src) {
				std::stack<T>::operator=(src);
				return *this;
			}
};

#endif
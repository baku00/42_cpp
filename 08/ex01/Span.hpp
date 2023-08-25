#ifndef SPAN_HPP
# define SPAN_HPP
# include <stdexcept>
# include <algorithm>
# include <vector>

/**
 * @brief Span class
 * @details
 * A Span is a class that can store a list of numbers.
 * It has a fixed size and can't be resized.
 * It can store a maximum of N numbers.
 * It has a method to add a number to the list.
 * It has a method to return the shortest distance between two numbers in the list.
 * It has a method to return the longest distance between two numbers in the list.
*/
class Span {
	private:
		/**
		 * @brief Size of the array
		*/
		unsigned int	N;

		/**
		 * @brief Array number
		*/
		int				*_array;

		/**
		 * @brief Number of elements in the array
		*/
		unsigned int	_size;

		/**
		 * @brief Array is full
		 * @exception FullException
		 * @return const char *
		*/
		class FullException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		/**
		 * @brief Array is empty
		 * @exception EmptyException
		 * @return const char *
		*/
		class EmptyException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		/**
		 * @brief Array is too small
		 * @exception TooSmallException
		 * @return const char *
		*/
		class TooSmallException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	public:
		/**
		 * @brief Span constructor
		 * @param n size of the array
		 * @return
		*/
		Span	(unsigned int n);


		// Coplien

		/**
		 * @brief Span copy constructor
		 * @param copy Span to copy
		 * @return
		*/
		Span	(const Span &copy);

		/**
		 * @brief Span assignation operator
		 * @param src Span to copy
		 * @return Span
		*/
		Span	&operator=(const Span &src);

		/**
		 * @brief Span destructor
		 * @return
		*/
		~Span	();


		// Methods

		/**
		 * @brief add a number to the array
		 * @param n number to add
		 * @return void
		*/
		void	addNumber(int n);

		/**
		 * @brief return the shortest distance between two span
		 * @return int
		*/
		int shortestSpan();

		/**
		 * @brief return the longest distance between two span
		 * @return int
		*/
		int longestSpan();
};

std::ostream	&operator<<(std::ostream &out, const Span &span);

#endif

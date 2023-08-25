#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->N = n;
	this->_size = 0;
	this->_array = new int[n];
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	delete [] this->_array;
}

Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
		this->_size = copy._size;
		this->_array = new int[this->N];
		for (unsigned int i = 0; i < this->N; i++)
			this->_array[i] = copy._array[i];
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_size == this->N)
		throw Span::FullException();
	this->_array[this->_size++] = n;
}

int		Span::shortestSpan()
{
	if (this->_size < 2)
		throw Span::TooSmallException();
	std::sort(this->_array, this->_array + this->_size);
	int min = this->_array[1] - this->_array[0];
	for (unsigned int i = 2; i < this->_size; i++)
	{
		if (this->_array[i] - this->_array[i - 1] < min)
			min = this->_array[i] - this->_array[i - 1];
	}
	return (min);
}

int		Span::longestSpan()
{
	if (this->_size < 2)
		throw Span::TooSmallException();
	std::sort(this->_array, this->_array + this->_size);
	int max = this->_array[1] - this->_array[0];
	for (unsigned int i = 2; i < this->_size; i++)
	{
		if (this->_array[i] - this->_array[i - 1] > max)
			max = this->_array[i] - this->_array[i - 1];
	}
	return (max);
}

const char *Span::FullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::TooSmallException::what() const throw()
{
	return ("Span is too small");
}
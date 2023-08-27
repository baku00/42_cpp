#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->N = n;
	this->_size = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	this->_array.clear();
}

Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
		this->_array.clear();

		for (std::vector<int>::iterator it = copy.getArray().begin(); it != copy.getArray().end(); it++)
			this->_array.push_back(*it);
	}
	return (*this);
}

unsigned int	Span::getN() const
{
	return (this->N);
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

std::vector<int>	Span::getArray() const
{
	return (this->_array);
}

int		Span::getDistance(int a, int b)
{
	return a > b ? a - b : b - a;
}

void	Span::addNumber(int n)
{
	if (this->getSize() == this->getN())
		throw Span::FullException();
	this->_array.push_back(n);
	this->_size += 1;
}

int		Span::shortestSpan()
{
	if (this->getSize() == 0)
		throw Span::EmptyException();
	if (this->getSize() < 2)
		throw Span::TooSmallException();

	int distance = -1;
	std::vector<int>::iterator latest = this->_array.begin();

	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
	{
		if (latest == this->_array.begin())
		{
			latest = it;
			continue;
		}
		int compare = this->getDistance(*it, *latest);
		latest = it;
		if (compare < distance || distance == -1)
			distance = compare;
	}

	return (distance);
}

int		Span::longestSpan()
{
	if (this->_size == 0)
		throw Span::EmptyException();
	if (this->_size < 2)
		throw Span::TooSmallException();

	int distance = -1;
	std::vector<int>::iterator latest = this->_array.begin();

	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
	{
		if (latest == this->_array.begin())
		{
			latest = it;
			continue;
		}
		int compare = this->getDistance(*it, *latest);
		latest = it;
		if (compare > distance || distance == -1)
			distance = compare;
	}

	return distance;
}

const char *Span::FullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::TooSmallException::what() const throw()
{
	return ("Span is too small");
}

const char *Span::EmptyException::what() const throw()
{
	return ("Span is empty");
}

std::ostream	&operator<<(std::ostream &out, const Span &span)
{
	out << "Span: ";
	if (span.getSize() == 0)
		out << "empty";
	else
	{
		for (std::vector<int>::iterator it = span.getArray().begin(); it != span.getArray().end(); it++)
			out << *it << " ";
	}
	return (out);
}

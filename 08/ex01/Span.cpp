#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->N = n;
	this->_current_size = 0;
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
		std::vector<int> array = copy.getArray();
		for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
			this->_array.push_back(*it);
	}
	return (*this);
}

unsigned int	Span::getN() const
{
	return (this->N);
}

unsigned int	Span::getCurrentSize() const
{
	return (this->_current_size);
}

std::vector<int>	Span::getArray() const
{
	return (this->_array);
}

const std::vector<int>	&Span::getRefArray() const
{
	return (this->_array);
}

void	Span::addNumber(int n)
{
	if (this->getCurrentSize() == this->getN())
		throw Span::FullException();
	this->_array.push_back(n);
	this->_current_size += 1;
}

void	Span::fill()
{
	const int size = this->getN();

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		this->addNumber(rand() % (size * 100) + 1);
	}
}

int		Span::shortestSpan()
{
	if (this->getCurrentSize() == 0)
		throw Span::EmptyException();
	if (this->getCurrentSize() < 2)
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
		int compare = abs(*it - *latest);
		latest = it;
		if (compare < distance || distance == -1)
			distance = compare;
	}

	return (distance);
}

int		Span::longestSpan()
{
	if (this->_current_size == 0)
		throw Span::EmptyException();
	if (this->_current_size < 2)
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
		int compare = abs(*it - *latest);
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
	if (span.getCurrentSize() == 0)
		out << "empty";
	else
	{
		std::vector<int> array = span.getArray();
		for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
			out << *it << " ";
	}
	return (out);
}

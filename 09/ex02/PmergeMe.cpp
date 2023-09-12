#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		int tmp;
		if (std::stringstream(argv[i]) >> tmp && tmp >= 0)
		{
			this->unsortedVector.push_back(tmp);
			this->unsortedList.push_back(tmp);
		}
		else
			throw "Invalid argument";
	}
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
	this->unsortedVector.clear();
	this->sortedVector.clear();
	this->unsortedList.clear();
	this->sortedList.clear();
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->unsortedVector.clear();
		std::vector<int> usv = rhs.getUnsortedVector();
		for (std::vector<int>::iterator it = usv.begin(); it != usv.end(); it++)
			this->unsortedVector.push_back(*it);
		
		this->sortedVector.clear();
		std::vector<int> sv = rhs.getSortedVector();
		for (std::vector<int>::iterator it = sv.begin(); it != sv.end(); it++)
			this->sortedVector.push_back(*it);

		this->unsortedList.clear();
		std::list<int> usl = rhs.getUnsortedList();
		for (std::list<int>::iterator it = usl.begin(); it != usl.end(); it++)
			this->unsortedList.push_back(*it);
		
		this->sortedList.clear();
		std::list<int> sl = rhs.getSortedList();
		for (std::list<int>::iterator it = sl.begin(); it != sl.end(); it++)
			this->sortedList.push_back(*it);
	}
	return (*this);
}

void PmergeMe::vector()
{
	this->time_vector = clock();

	this->sortedVector = this->sortVector(this->unsortedVector);

	this->time_vector = ((clock() - this->time_vector) * 1000000 / CLOCKS_PER_SEC);
}

std::vector<int>	PmergeMe::sortVector(std::vector<int> &vector)
{
	if (vector.size() <= 1)
		return (vector);

	std::vector<int> left;
	std::vector<int> right;

	int middle = vector.size() / 2;

	left.insert(left.begin(), vector.begin(), vector.begin() + middle);
	right.insert(right.begin(), vector.begin() + middle, vector.end());

	left = this->sortVector(left);
	right = this->sortVector(right);

	return (this->mergeVector(left, right));
}

std::vector<int>	PmergeMe::mergeVector(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int> result;

	while (left.size() > 0 || right.size() > 0)
	{
		if (left.size() > 0 && right.size() > 0)
		{
			if (left.front() <= right.front())
			{
				result.push_back(left.front());
				left.erase(left.begin());
			}
			else
			{
				result.push_back(right.front());
				right.erase(right.begin());
			}
		}
		else if (left.size() > 0)
		{
			for (size_t i = 0; i < left.size(); i++)
			{
				result.push_back(left[i]);
				left.erase(left.begin());
			}
		}
		else if (right.size() > 0)
		{
			for (size_t i = 0; i < right.size(); i++)
			{
				result.push_back(right[i]);
				right.erase(right.begin());
			}
		}
	}
	return (result);
}

std::list<int>	PmergeMe::sortList(std::list<int> &list)
{
	if (list.size() <= 1)
		return (list);

	std::list<int> left;
	std::list<int> right;

	int middle = list.size() / 2;

	for (int i = 0; i < middle; i++)
		left.push_back(list.front()), list.pop_front();
	while (list.size() > 0)
		right.push_back(list.front()), list.pop_front();

	left = this->sortList(left);
	right = this->sortList(right);

	return (this->mergeList(left, right));
}

std::list<int> PmergeMe::mergeList(std::list<int> &left, std::list<int> &right)
{
	std::list<int> result;

	while (left.size() > 0 || right.size() > 0)
	{
		if (left.size() > 0 && right.size() > 0)
		{
			if (left.front() <= right.front())
			{
				result.push_back(left.front());
				left.pop_front();
			}
			else
			{
				result.push_back(right.front());
				right.pop_front();
			}
		}
		else if (left.size() > 0)
		{
			for (size_t i = 0; i < left.size(); i++)
				result.push_back(left.front()), left.pop_front();
		}
		else if (right.size() > 0)
		{
			for (size_t i = 0; i < right.size(); i++)
				result.push_back(right.front()), right.pop_front();
		}
	}

	return (result);
}

void	PmergeMe::list()
{
	this->time_list = clock();

	this->sortedList = this->sortList(this->unsortedList);

	this->time_list = ((clock() - this->time_list) * 1000000 / CLOCKS_PER_SEC);
}

void	PmergeMe::display()
{
	this->displayVector();
	this->displayTime();
}

void	PmergeMe::displayVector()
{
	std::cout << "Before: " << std::flush;
	for (std::vector<int>::iterator it = this->unsortedVector.begin(); it != this->unsortedVector.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl;

	std::cout << "After: " << std::flush;
	for (std::vector<int>::iterator it = this->sortedVector.begin(); it != this->sortedVector.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl;
}

void	PmergeMe::displayTime()
{
	std::cout << "Time to process a range of " << this->unsortedVector.size() << " elements with std::vector => " << this->time_vector << " microsec (us)" << std::endl;
	std::cout << "Time to process a range of " << this->unsortedVector.size() << " elements with std::list => " << this->time_list << " microsec (us)" << std::endl;
}

std::vector<int> PmergeMe::getSortedVector() const
{
	return this->sortedVector;
}

std::vector<int> PmergeMe::getUnsortedVector() const
{
	return this->unsortedVector;
}

std::list<int> PmergeMe::getSortedList() const
{
	return this->sortedList;
}

std::list<int> PmergeMe::getUnsortedList() const
{
	return this->unsortedList;
}

std::ostream	& operator<<(std::ostream & out, PmergeMe const & instance)
{
	std::vector<int> sv = instance.getSortedVector();
	for (std::vector<int>::iterator it = sv.begin(); it != sv.end(); it++)
		out << *it << " " << std::flush;
	return out;
}
#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define YELLOW "\033[33;1m"
# define BLUE "\033[34;1m"
# define RESET "\033[0m"

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <limits>
# include <utility>
# include <cstdlib>
# include <algorithm>
# include <ctime>

class PmergeMe
{
private:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &rhs);

	clock_t time_vector;
	clock_t time_list;

	std::vector<int> unsortedVector;
	std::vector<int> sortedVector;

	std::list<int> unsortedList;
	std::list<int> sortedList;

	std::vector<int> sortVector(std::vector<int> &v);
	std::vector<int> mergeVector(std::vector<int> &v1, std::vector<int> &v2);

	std::list<int> sortList(std::list<int> &l);
	std::list<int> mergeList(std::list<int> &l1, std::list<int> &l2);

public:
	PmergeMe(char **argv);
	~PmergeMe();

	void merge();
	void vector();
	void list();

	std::vector<int> getUnsortedVector() const;
	std::vector<int> getSortedVector() const;
	std::list<int> getUnsortedList() const;
	std::list<int> getSortedList() const;

	void display();
	void displayVector();
	void displayTime();
};

std::ostream	& operator<<(std::ostream & out, PmergeMe const & instance);

#endif
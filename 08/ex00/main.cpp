#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main( void ) {
	std::vector<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	std::vector<int>::iterator it;
	it = easyfind(numbers, 7);

	if (it != numbers.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;

	return (0);
}

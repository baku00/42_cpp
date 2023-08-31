#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

void display(std::vector<int> numbers)
{
	if (numbers.empty())
	{
		std::cout << "Vector is empty" << std::endl;
		return ;
	}
	std::cout << "Numbers: ";
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void test0(std::vector<int> numbers)
{
	std::cout << "Test 0: Empty vector" << std::endl;
	std::vector<int>::iterator it = easyfind(numbers, 7);

	if (it != numbers.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

void test1(std::vector<int> numbers)
{
	std::cout << "Test 1: Try to find a valid number (3)" << std::endl;
	std::vector<int>::iterator it = easyfind(numbers, 3);

	if (it != numbers.end())
		std::cout << "Found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

void test2(std::vector<int> numbers)
{
	std::cout << "Test 2: Try to find an invalid number (7)" << std::endl;
	std::vector<int>::iterator it = easyfind(numbers, 7);

	if (it != numbers.end())
		std::cout << "Founded" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

int main( void ) {
	std::vector<int> numbers;

	display(numbers);
	test0(numbers);
	std::cout << std::endl;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	display(numbers);
	test1(numbers);
	std::cout << std::endl;

	test2(numbers);
	return (0);
}

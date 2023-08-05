#include <iostream>
#include "./template/Array.hpp"
int main() {

	Array<int> a(5);
	Array<int> b(5);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;

	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = a[i] * 2;

	std::cout << "a: ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Try to edit a" << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = a[i] * 3;

	std::cout << "a: ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	
	std::cout << std::endl;
	std::cout << "b: ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "If array b isn't changed, the program work" << std::endl;

	std::cout << "Try access to invalid index of a" << std::endl;
	try
	{
		std::cout << "a[10]: " << a[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
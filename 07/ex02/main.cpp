#include <iostream>
#include "Array.hpp"

template<typename T>
void display(std::string name, Array<T> array)
{
	std::cout << name << ": " << array << std::endl;
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << name << "[" << i << "]: " << array[i] << std::endl;
	std::cout << std::endl;
}

int main()
{
	std::cout << "Test -1: 42 test" << std::endl;
	int *a = new int(5);

	std::cout << "a: " << *a << std::endl << std::endl;

	std::cout << "Test 0: Création de la liste z et b" << std::endl;
	Array<int> z(5);
	Array<int> b(5);

	for (unsigned int i = 0; i < z.size(); i++)
		z[i] = i;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i + 20;

	std::cout << "Default arrays" << std::endl;
	display("z", z);
	display("b", b);

	std::cout << std::endl << "Test 1: Copie de z dans b" << std::endl;
	Array<int> c(z);

	display("c", c);

	std::cout << std::endl << "Test 2: Edition de z" << std::endl;
	for (unsigned int i = 0; i < z.size(); i++)
		z[i] = i * 2;

	display("z", z);
	display("c", c);

	std::cout << std::endl << "Test 3: Edition de b" << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 3;

	display("b", b);

	std::cout << std::endl << "Test 4: c = b" << std::endl;
	c = b;

	display("c", c);

	std::cout << std::endl << "Test 5: Edition de b" << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 4;

	display("b", b);
	display("c", c);

	std::cout << std::endl << "Test 6: Edition de c" << std::endl;
	for (unsigned int i = 0; i < c.size(); i++)
		c[i] = i * 5;

	display("c", c);
	display("b", b);

	std::cout << std::endl << "Test 7: Création de d liste vide" << std::endl;
	Array<int> d;

	display("d", d);

	std::cout << std::endl << "Test 8: d = c" << std::endl;
	d = c;

	display("d", d);

	std::cout << std::endl << "Test 9: Index out of range" << std::endl;
	try {
		std::cout << "z[10]: " << z[10] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
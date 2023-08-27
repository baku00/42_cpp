#include "Bureaucrat.hpp"

int main()
{
	/**
	 * Test 0, Copelien test
	*/
	std::cout << "Test 0, Copelien test" << std::endl;
	Bureaucrat *copelien = new Bureaucrat("ToCopy", 150);
	Bureaucrat *copy = new Bureaucrat(*copelien);
	Bureaucrat *equals = new Bureaucrat("Equals", 150);
	
	*equals = *copelien;

	std::cout << "Copelien:" << std::endl;
	std::cout << *copelien << std::endl;

	std::cout << "Copy:" << std::endl;
	std::cout << *copy << std::endl;

	std::cout << "Equals:" << std::endl;
	std::cout << *equals << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << "Incrementation du copelien" << std::endl;
		copelien->incrementGrade();
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Copelien:" << std::endl;
	std::cout << *copelien << std::endl;

	std::cout << "Copy:" << std::endl;
	std::cout << *copy << std::endl;

	std::cout << "Equals:" << std::endl;
	std::cout << *equals << std::endl;

	delete copelien;
	delete copy;
	delete equals;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	/**
	 * Test 1, Grade trop haut
	*/
	std::cout << "Test 1, Grade trop haut (0)" << std::endl;

	Bureaucrat *too_high = NULL;

	try {
		std::cout << "Creation d'un bureaucrate avec un grade trop haut (0):" << std::endl;
		too_high = new Bureaucrat("Patrick", 0);
		std::cout << *too_high << std::endl;
	}
	catch (std::exception &e)
	{ std::cout << e.what() << std::endl; }

	if (too_high)
		delete too_high;
	std::cout << std::endl;
	std::cout << std::endl;



	/**
	 * Test 2, Grade trop bas
	*/
	std::cout << "Test 2, Grade trop bas (151)" << std::endl;

	Bureaucrat *too_low = NULL;

	try {
		std::cout << "Creation d'un bureaucrate avec un grade trop haut (151):" << std::endl;
		too_low = new Bureaucrat("Patrick", 151);
		std::cout << *too_low << std::endl;
	}
	catch (std::exception &e)
	{ std::cout << e.what() << std::endl; }

	if (too_low)
		delete too_low;
	std::cout << std::endl;
	std::cout << std::endl;


	/**
	 * Test 3, Grade correct (150)
	*/
	std::cout << "Test 3, Grade trop bas (150)" << std::endl;

	Bureaucrat *grade_150 = NULL;

	try {
		std::cout << "Creation d'un bureaucrate avec un grade trop haut (150):" << std::endl;
		grade_150 = new Bureaucrat("Patrick", 150);
		std::cout << *grade_150 << std::endl;
	}
	catch (std::exception &e)
	{ std::cout << e.what() << std::endl; }

	try
	{
		std::cout << "Decrementation du grade:" << std::endl;
		grade_150->decrementGrade();
		std::cout << *grade_150 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	
	try
	{
		std::cout << "Incrementation du grade:" << std::endl;
		grade_150->incrementGrade();
		std::cout << *grade_150 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	try
	{
		std::cout << "Decrementation du grade:" << std::endl;
		grade_150->decrementGrade();
		std::cout << *grade_150 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	if (grade_150)
		delete grade_150;
	std::cout << std::endl;
	std::cout << std::endl;


	/**
	 * Test 4, Grade correct (1)
	*/
	std::cout << "Test 4, Grade trop bas (1)" << std::endl;

	Bureaucrat *grade_1 = NULL;

	try {
		std::cout << "Creation d'un bureaucrate avec un grade trop haut (1):" << std::endl;
		grade_1 = new Bureaucrat("Patrick", 1);
		std::cout << *grade_1 << std::endl;
	}
	catch (std::exception &e)
	{ std::cout << e.what() << std::endl; }

	try
	{
		std::cout << "Incrementation du grade:" << std::endl;
		grade_1->incrementGrade();
		std::cout << *grade_1 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	try
	{
		std::cout << "Decrementation du grade:" << std::endl;
		grade_1->decrementGrade();
		std::cout << *grade_1 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	try
	{
		std::cout << "Incrementation du grade:" << std::endl;
		grade_1->incrementGrade();
		std::cout << *grade_1 << std::endl;
	}
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	if (grade_1)
		delete grade_1;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}

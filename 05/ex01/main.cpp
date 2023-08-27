#include "Bureaucrat.hpp"

int main()
{
	/**
	 * Test 0, Copelien test
	*/
	std::cout << "Test 0, Copelien test" << std::endl;
	Form *copelien = new Form("ToCopy", 100, 100);
	Form *copy = new Form(*copelien);
	Form *equals = new Form("Equals", 100, 100);

	*equals = *copelien;

	std::cout << "Copelien:" << std::endl;
	std::cout << *copelien << std::endl;

	std::cout << "Copy:" << std::endl;
	std::cout << *copy << std::endl;

	std::cout << "Equals:" << std::endl;
	std::cout << *equals << std::endl;

	delete copelien;
	delete copy;
	delete equals;

	std::cout << "----------------------------------------" << std::endl << std::endl;


	/**
	 * Création des formulaires et des bureaucrates
	*/
	Form form_100_130("Formulaire-100-130", 100, 130);
	Form form_80_110("Formulaire-80-110", 80, 110);
	Form form_60_90("Formulaire-60-90", 60, 90);

	Bureaucrat bureaucrat_100("Bureaucrate-100", 100);
	Bureaucrat bureaucrat_70("Bureaucrate-70", 70);
	Bureaucrat bureaucrat_50("Bureaucrate-50", 50);

	/**
	 * Test 1, bureaucrate 100 signe les formulaires 100-130, 80-110 et 60-90
	*/
	std::cout << "Test 1, bureaucrate 100 signe les formulaires 100-130, 80-110 et 60-90" << std::endl;
	bureaucrat_100.signForm(form_100_130);
	bureaucrat_100.signForm(form_80_110);
	bureaucrat_100.signForm(form_60_90);
	std::cout << "----------------------------------------" << std::endl << std::endl;


	/**
	 * Test 2, bureaucrate 70 signe les formulaires 100-130, 80-110 et 60-90
	*/
	std::cout << "Test 2, bureaucrate 70 signe les formulaires 100-130, 80-110 et 60-90" << std::endl;
	bureaucrat_70.signForm(form_100_130);
	bureaucrat_70.signForm(form_80_110);
	bureaucrat_70.signForm(form_60_90);
	std::cout << "----------------------------------------" << std::endl << std::endl;

	/**
	 * Test 3, bureaucrate 50 signe les formulaires 100-130, 80-110 et 60-90
	*/
	std::cout << "Test 3, bureaucrate 50 signe les formulaires 100-130, 80-110 et 60-90" << std::endl;
	bureaucrat_50.signForm(form_100_130);
	bureaucrat_50.signForm(form_80_110);
	bureaucrat_50.signForm(form_60_90);
	std::cout << "----------------------------------------" << std::endl << std::endl;

	return (0);
}

#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/Form/Type/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "class/Form/Type/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "class/Form/Type/PresidentialPardonForm/PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	Bureaucrat *jean = new Bureaucrat("Jean", 100);
	std::cout << *jean << std::endl;
	Bureaucrat *lucas = new Bureaucrat("Lucas", 1);
	std::cout << *lucas << std::endl;
	std::cout << std::endl;

	// TEST 1: instanciation of abstract class Form
	// Form *test = new Form("test", 1 , 1);		// DOESN'T COMPILE

	// TEST 2: instanciation of concreat class Shrubbery
	AForm *shrubbery1 = new ShrubberyCreationForm("Jardin");
	std::cout << *shrubbery1 << std::endl;
	std::cout << std::endl;

	// TEST 3: instanciation of concreat classes Robotomy and Presidential
	AForm *robotomy1 = new RobotomyRequestForm("Perceuse");
	std::cout << *robotomy1 << std::endl;
	std::cout << std::endl;

	AForm *presidential1 = new PresidentialPardonForm("Corbeau");
	std::cout << *presidential1 << std::endl;
	std::cout << std::endl;

	// TEST 4: signatures
	jean->signForm(*shrubbery1);				// 100 vs 145
	jean->signForm(*robotomy1);					// 100 vs 72
	jean->signForm(*presidential1);				// 100 vs 25
	presidential1->beSigned(*lucas);			// 1 vs 5
	std::cout << std::endl;

	// TEST 5: execute
	try { shrubbery1->execute(*jean); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }
	
	try { robotomy1->execute(*jean); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }

	try { presidential1->execute(*jean); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }
	
	try { shrubbery1->execute(*lucas); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }

	try { robotomy1->execute(*lucas); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }

	try { presidential1->execute(*lucas); }
	catch(const std::exception& e)
	{ std::cerr << e.what() << '\n'; }

	std::cout << std::endl;
	jean->executeForm(*robotomy1);				// 100 vs 45
	robotomy1->beSigned(*lucas);
	jean->executeForm(*robotomy1);				// 100 vs 45
	lucas->executeForm(*robotomy1);				// 1 vs 45

	// TEST 6: destructors
	std::cout << std::endl;
	delete jean;
	delete lucas;
	delete shrubbery1;
	delete robotomy1;
	delete presidential1;
	return 0;
}
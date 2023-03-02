#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Adresse mémoire: " << &brain << std::endl;
	std::cout << "String PTR: " << stringPTR << std::endl;
	std::cout << "String REF: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Valeur: " << brain << std::endl;
	std::cout << "String PTR: " << *stringPTR << std::endl;
	std::cout << "String REF: " << stringREF << std::endl;
	std::cout << std::endl;

	stringREF = "Hi";

	std::cout << "Valeur: " << brain << std::endl;
	std::cout << "String PTR: " << *stringPTR << std::endl;
	std::cout << "String REF: " << stringREF << std::endl;

	return (0);
}
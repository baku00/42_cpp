#include "class/Contact/Contact.hpp"
#include "class/PhoneBook/PhoneBook.hpp"
#include "class/Utils/Utils.hpp"

void	display_help()
{
	std::cout << "Liste des commandes disponibles" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "ADD:\tAjouter un contact" << std::endl;
	std::cout << "SEARCH:\tChercher un contact" << std::endl;
	std::cout << "TEST:\tCréer 8 contacts de test" << std::endl;
	std::cout << "EXIT:\tQuitter le répértoire" << std::endl;
}

int main()
{
	PhoneBook	phonebook;
	std::string	command		= "";

	Utils::clear_screen();
	while (command != "EXIT")
	{
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "TEST")
			phonebook.create_test();
		else
			display_help();
		command = Utils::readline("Command: ");
		Utils::clear_screen();
	}
	return (0);
}
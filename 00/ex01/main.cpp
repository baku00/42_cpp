#include "class/Contact/Contact.hpp"
#include "class/PhoneBook/PhoneBook.hpp"
#include "class/Utils/Utils.hpp"

void	display_help()
{
	std::cout << "Liste des commandes disponibles" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "add:\tAjouter un contact" << std::endl;
	std::cout << "search:\tChercher un contact" << std::endl;
	std::cout << "test:\tCréer 8 contacts de test" << std::endl;
	std::cout << "exit:\tQuitter le répértoire" << std::endl;
}

int main()
{
	PhoneBook	*phonebook	= new PhoneBook();
	std::string	command		= "";

	Utils::clear_screen();
	while (command != "exit")
	{
		if (command == "add")
			phonebook->add_contact();
		else if (command == "search")
			phonebook->search_contact();
		else if (command == "test")
			phonebook->create_test();
		else
			display_help();
		command = Utils::readline("Command: ");
		Utils::clear_screen();
	}
	delete phonebook;
	return (0);
}
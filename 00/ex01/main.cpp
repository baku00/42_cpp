#include "class/Contact/Contact.hpp"
#include "class/PhoneBook/PhoneBook.hpp"

std::string	ask_command()
{
	std::string	command;

	std::cout << "Command: " << std::flush;
	std::cin >> command;
	return (command);
}

void	display_help()
{
	for (size_t i = 0; i < 3; i++)
		std::cout << std::endl;
	
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

	display_help();
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
		command = ask_command();
	}
	delete phonebook;
	return (0);
}
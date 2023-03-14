#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->number_of_contact = 0;
	this->contact_index = this->number_of_contact % 8;
	std::cout << "Create a new PhoneBook" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->contacts[i] = new Contact();
}

PhoneBook::~PhoneBook()
{
	for (size_t i = 0; i < 8; i++)
		delete this->contacts[i];
	std::cout << "Destroy a PhoneBook" << std::endl;
}

std::string	PhoneBook::ask(std::string field)
{
	std::string	value;

	std::cout << field << std::flush;
	std::cin >> value;
	return (value);
}

void	PhoneBook::create_test()
{
	std::string index = " ";

	for (int i = 0; i < 8; i++)
	{
		index[0] = i + 48;
		Contact *contact = new Contact(index, index, index, index, index);
		*this->contacts[this->contact_index] = *contact;
		delete contact;
		this->number_of_contact += 1;
		this->contact_index = this->number_of_contact % 8;
	}
}

void	PhoneBook::add_contact()
{
	std::string firstname = ask("Firstname: ");
	std::string name = ask("Name: ");
	std::string surname = ask("Surname: ");
	std::string phone_number = ask("Phonenumber: ");
	std::string darksecret = ask("Darksecret: ");

	Contact *contact = new Contact(
		firstname,
		name,
		surname,
		phone_number,
		darksecret
	);
	*this->contacts[this->contact_index] = *contact;
	delete contact;
	this->number_of_contact += 1;
	this->contact_index = this->number_of_contact % 8;
}

bool	PhoneBook::is_valid_index(int index)
{
	return (index >= 0 && index <= 8 && index < this->number_of_contact);
}

std::string	PhoneBook::format_for_column(std::string value)
{
	std::string result = value;
	std::string	column = "          ";
	if (result.length() > 10)
		result = result.substr(0, 9).append(".");
	else
		result = column.substr(0, 10 - result.length()).append(result);
	return result;
}

int	PhoneBook::get_limit()
{
	int	limit = this->number_of_contact;

	if (this->number_of_contact >= 8)
		limit = 8;
	return (limit);
}

void	PhoneBook::display_all_contacts()
{
	std::cout << "#" << std::flush;
	std::cout << "   " << std::flush;
	std::cout << format_for_column("Firstname") << std::flush;
	std::cout << "   " << std::flush;
	std::cout << format_for_column("Name") << std::flush;
	std::cout << "   " << std::flush;
	std::cout << format_for_column("Surname") << std::endl;
	for (size_t i = 0; i < 40; i++)
		std::cout << "=" << std::flush;
	std::cout << std::endl;

	for (int i = 0; i < get_limit(); i++)
	{
		std::cout << i << std::flush;
		std::cout << " | " << std::flush;
		std::cout << format_for_column(this->contacts[i]->get_firstname()) << std::flush;
		std::cout << " | " << std::flush;
		std::cout << format_for_column(this->contacts[i]->get_name()) << std::flush;
		std::cout << " | " << std::flush;
		std::cout << format_for_column(this->contacts[i]->get_surname()) << std::flush;
		std::cout << std::endl;
	}
}

void	PhoneBook::display_empty_list()
{
	std::cout << "La liste de contact est vide, utilisez la commande 'add' pour en ajouter un nouveau" << std::endl;
}

bool	PhoneBook::valid_number_of_contact()
{
	return (this->number_of_contact > 1);
}

void	PhoneBook::search_contact()
{
	int	index;

	if (this->number_of_contact == 0)
		this->display_empty_list();
	else if (this->number_of_contact == 1)
	{
		std::cout << "Vous n'avez qu'un seul contact" << std::endl;
		this->contacts[0]->display();
	}
	else
	{
		this->display_all_contacts();
		index = std::atoi(ask("Index: ").c_str());
		while (!is_valid_index(index))
		{
			for (size_t i = 0; i < 3; i++)
				std::cout << std::endl;

			std::cout << "L'index demandé est invalide, il doit être compris entre 0 et le nombre de contact actuel (" << get_limit() - 1 << ")" << std::endl;
			std::cout << std::endl;

			index = !!NULL;

			this->display_all_contacts();
			index = ask_index("Index: ");
		}
		for (size_t i = 0; i < 3; i++)
				std::cout << std::endl;
		std::cout << "Voici les informations du contact numéro " << index << std::endl;
		this->contacts[index]->display();
	}
}

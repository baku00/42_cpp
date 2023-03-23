#include "PhoneBook.hpp"

/**
 * - Constructors
 * - Destructors
 * - Getters
 * - Displays
 * - Inputs
 * - Validators
 * - Utilities
 * - Methods
 * - Generators
*/

/**
 * ====================
 * |   Constructors   |
 * ====================
*/

PhoneBook::PhoneBook()
{
	this->number_of_contact = 0;
	this->contact_index = this->number_of_contact % 8;
	std::cout << "Create a new PhoneBook" << std::endl;
}

/**
 * ====================
 * |    Destructors   |
 * ====================
*/

PhoneBook::~PhoneBook()
{
	std::cout << "Destroy a PhoneBook" << std::endl;
}

/**
 * ====================
 * |      Getters     |
 * ====================
*/

int	PhoneBook::get_index_from_string(std::string index)
{
	return (index[0] - 48);
}

int PhoneBook::get_limit()
{
	int limit = this->number_of_contact;

	if (this->number_of_contact >= 8)
		limit = 8;
	return (limit);
}


/**
 * ====================
 * |     Displays     |
 * ====================
*/

void	PhoneBook::display_index_error()
{
	std::cout << "L'index demandé est invalide. " << std::endl;
	std::cout << "Il doit être compris entre 0 et le nombre de contact actuel" << std::flush;
	std::cout << " (" << this->get_limit() - 1 << ")" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::display_all_contacts()
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
		std::cout << format_for_column(contacts[i].get_firstname()) << std::flush;
		std::cout << " | " << std::flush;
		std::cout << format_for_column(contacts[i].get_name()) << std::flush;
		std::cout << " | " << std::flush;
		std::cout << format_for_column(contacts[i].get_surname()) << std::flush;
		std::cout << std::endl;
	}
}

void PhoneBook::display_empty_list()
{
	std::cout << "La liste de contact est vide, utilisez la commande 'add' pour en ajouter un nouveau" << std::endl;
}

void	PhoneBook::display_the_only_one_contact()
{
	std::cout << "Vous n'avez qu'un seul contact" << std::endl;
	contacts[0].display();
}


/**
 * ====================
 * |     Inputs     |
 * ====================
*/

std::string PhoneBook::ask(std::string field)
{
	return (Utils::readline(field));
}

std::string PhoneBook::ask_contact_index()
{
	std::string index = this->ask("Index: ");

	while (!this->is_valid_index(index))
	{
		Utils::clear_screen();

		this->display_index_error();

		this->display_all_contacts();
		index = ask("Index: ");
	}

	return (index);
}

/**
 * ====================
 * |    Validators    |
 * ====================
*/

bool PhoneBook::is_valid_index(std::string index)
{
	if (index.length() != 1)
		return (false);
	if (index[0] < '0' && index[0] > '9')
		return (false);
	if (index[0] - 48 >= this->number_of_contact)
		return (false);
	return (true);
}


/**
 * ====================
 * |     Utilities    |
 * ====================
*/

std::string PhoneBook::format_for_column(std::string value)
{
	std::string result = value;
	std::string column = "          ";
	if (result.length() > 10)
		result = result.substr(0, 9).append(".");
	else
		result = column.substr(0, 10 - result.length()).append(result);
	return result;
}

/**
 * ====================
 * |      Methods     |
 * ====================
*/

void PhoneBook::add_contact()
{
	std::string firstname = ask("Firstname: ");
	std::string name = ask("Name: ");
	std::string surname = ask("Surname: ");
	std::string phone_number = ask("Phonenumber: ");
	std::string darksecret = ask("Darksecret: ");

	contacts[this->contact_index].replace(firstname, name, surname, phone_number, darksecret);
	this->number_of_contact += 1;
	this->contact_index = this->number_of_contact % 8;
}

void PhoneBook::search_contact()
{
	std::string index = "";

	if (this->number_of_contact == 0)
		this->display_empty_list();
	else if (this->number_of_contact == 1)
		this->display_the_only_one_contact();
	else
	{
		this->display_all_contacts();
		index = this->ask_contact_index();

		Utils::clear_screen();

		std::cout << "Voici les informations du contact numéro " << index << std::endl;
		contacts[this->get_index_from_string(index)].display();
	}
}

/**
 * ====================
 * |    Generators    |
 * ====================
*/

void PhoneBook::create_test()
{
	std::string index = " ";

	for (int i = 0; i < 8; i++)
	{
		index[0] = i + 48;
		contacts[this->contact_index].replace(
			index,
			index,
			index,
			index,
			index
		);
		this->number_of_contact += 1;
		this->contact_index = this->number_of_contact % 8;
	}
}

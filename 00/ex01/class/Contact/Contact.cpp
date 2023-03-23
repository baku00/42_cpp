#include "Contact.hpp"

Contact::Contact(
	std::string	firstname,
	std::string	name,
	std::string	surname,
	std::string	phone_number,
	std::string	darksecret
)
{
	this->firstname = firstname;
	this->name = name;
	this->surname = surname;
	this->phone_number = phone_number;
	this->darksecret = darksecret;
	std::cout << "Alternative of constructor of Contact" << std::endl;
}

Contact::Contact()
{
	std::cout << "Constructor of Contact" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor of Contact" << std::endl;
}

std::string	Contact::get_firstname()
{
	return this->firstname;
}
std::string	Contact::get_name()
{
	return this->name;
}
std::string	Contact::get_surname()
{
	return this->surname;
}
std::string	Contact::get_phone_number()
{
	return this->phone_number;
}
std::string	Contact::get_darksecret()
{
	return this->darksecret;
}

void	Contact::display()
{
	std::cout << "Firstname:\t" << this->firstname << std::endl;
	std::cout << "Name:\t\t" << this->name << std::endl;
	std::cout << "Surname:\t" << this->surname << std::endl;
	std::cout << "Phone number:\t" << this->phone_number << std::endl;
	std::cout << "Darksecret:\t" << this->darksecret << std::endl;
}

void	Contact::replace(
	std::string	firstname,
	std::string	name,
	std::string	surname,
	std::string	phone_number,
	std::string	darksecret
)
{
	this->firstname = firstname;
	this->name = name;
	this->surname = surname;
	this->phone_number = phone_number;
	this->darksecret = darksecret;
}

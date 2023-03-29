#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Default constructor" << std::endl;
	this->function[0] = "debug";
	this->ptr[0] = &Harl::debug;
	this->function[1] = "info";
	this->ptr[1] = &Harl::info;	
	this->function[2] = "warning";
	this->ptr[2] = &Harl::warning;
	this->function[3] = "error";
	this->ptr[3] = &Harl::error;
}

Harl::~Harl() {
	std::cout << "Default destructor" << std::endl;
}

void	Harl::debug() {
	std::cout << "Debug" << std::endl;
}

void	Harl::info() {
	std::cout << "Info" << std::endl;
}

void	Harl::warning() {
	std::cout << "Warning" << std::endl;
}

void	Harl::error() {
	std::cout << "Error" << std::endl;
}

void	Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
		if (!this->function[i].compare(level))
		{
			(this->*(ptr[i]))();
			break;
		}
}

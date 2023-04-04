#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Constructor with name of character" << std::endl;
}

Character::Character(Character const & src)
{
	*this = src;
	std::cout << "Copy of constructor of Character" << std::endl;
}

Character::~Character()
{
	std::cout << "Destructor of Character" << std::endl;
}

std::string const & Character::getName() const
{
	return _name;
}

Character & Character::operator=(Character const & rhs)
{
	_name = rhs._name;
	return *this;
}

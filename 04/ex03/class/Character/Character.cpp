#include "Character.hpp"

Character::Character(std::string const & name) : name(name) {
	std::cout << "Character constructor with name" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->inventory[i] = NULL;
	}
}

Character::~Character() {
	std::cout << "Default character destructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] != NULL) {
			delete this->inventory[i];
		}
	}
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < INVENTORY_SIZE)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= INVENTORY_SIZE || this->inventory[idx] == NULL)
	{
		std::cout << "Index out of range or unused" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}

Character & Character::operator=(Character const & src) {
	std::cout << "Character assignation operator" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			this->inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::Character(Character const & src) {
	std::cout << "Character copy constructor" << std::endl;
	*this = src;
}

std::string const & Character::getName() const {
	return (this->name);
}

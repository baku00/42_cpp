#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyForm", 72, 45)
{
	this->target = target;
}

void	RobotomyRequestForm::action() const
{
	std::cout << "Bzzzzz bzzzzz" << std::endl;
	if (Random::getRandomInt(1))
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Error: " << this->target << " robotomization has failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyForm", 145, 137)
{
	this->target = target;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file((this->target + "_shrubbery").c_str());
	std::cout << "Création de l'arbre dans " << this->target + "_shrubbery" << std::endl;
	file << ShrubberyCreationFormConfig::getTree();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
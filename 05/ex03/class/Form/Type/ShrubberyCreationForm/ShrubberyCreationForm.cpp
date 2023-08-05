#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyForm", 145, 137)
{
	this->target = target;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file((this->target + "_shrubbery").c_str());

	file << ShrubberyCreationFormConfig::getTree();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
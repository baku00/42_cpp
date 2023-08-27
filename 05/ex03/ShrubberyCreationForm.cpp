#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyForm", 145, 137)
{
	this->target = target;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file((this->target + "_shrubbery").c_str());
	std::cout << "Création de l'arbre dans " << this->target + "_shrubbery" << std::endl;
	file << "               ,@@@@@@@,\n"
			"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			"       |o|        | |         | |\n"
			"       |.|        | |         | |\n"
			"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
}

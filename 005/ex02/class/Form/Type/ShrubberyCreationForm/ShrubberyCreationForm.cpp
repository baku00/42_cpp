#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Form &form) : target(form)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : target(copy.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	(void) form;
	return (out);
}
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern()
{}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string	formsName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*forms[3])(std::string) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formsName[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*forms[i])(target);
		}
	}

	throw Intern::FormTargetNullException();
}

AForm	*Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Intern	&Intern::operator=(Intern const &other)
{
	(void) other;
	return (*this);
}

const char			*Intern::FormTargetNullException::what() const throw()
{
	return ("The target doesn't exist");
}


AForm	*Intern::makeForm(std::string formName)
{
	(void) formName;
	throw Intern::FormTargetNullException();
}

std::ostream	&operator<<(std::ostream &out, Intern const &intern)
{
	(void) intern;
	out << "Wallah je sais pas quoi mettre";
	return (out);
}

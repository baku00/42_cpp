#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern()
{}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string	formsName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*forms[3])(std::string) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};


	for (int i = 0; i < 3; i++)
	{
		if (formName == formsName[i])
		{
			std::cout << *this << " creates " << formName << std::endl;
			return (this->*forms[i])(target);
		}
	}
	throw Intern::FormTargetNullException();
}

Form	*Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makePresidentialPardonForm(std::string target)
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


Form	*Intern::makeForm(std::string formName)
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

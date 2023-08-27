#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class AForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern
{
	private:
		AForm		*makeShrubberyCreationForm(std::string target);
		AForm		*makeRobotomyRequestForm(std::string target);
		AForm		*makePresidentialPardonForm(std::string target);

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern	&operator=(Intern const &other);
		AForm	*makeForm(std::string formName, std::string target);
		AForm	*makeForm(std::string formName);

		class FormTargetNullException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Intern const &intern);
typedef	AForm *(*f_ptr)(std::string const & target);

#endif
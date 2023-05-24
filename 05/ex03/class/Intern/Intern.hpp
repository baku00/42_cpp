#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "../Form/Form.hpp"
# include "../Form/Type/PresidentialPardonForm/PresidentialPardonForm.hpp"
# include "../Form/Type/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
# include "../Form/Type/RobotomyRequestForm/RobotomyRequestForm.hpp"

class Form;
class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern
{
	private:
		Form	*makeShrubberyCreationForm(std::string target);
		Form	*makeRobotomyRequestForm(std::string target);
		Form	*makePresidentialPardonForm(std::string target);

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern	&operator=(Intern const &other);
		Form	*makeForm(std::string formName, std::string target);
		Form	*makeForm(std::string formName);

		class FormTargetNullException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Intern const &intern);
typedef	Form *(*f_ptr)(std::string const & target);

#endif
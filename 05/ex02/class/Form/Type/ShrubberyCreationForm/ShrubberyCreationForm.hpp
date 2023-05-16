#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "../Form.hpp"

class Form;

class ShrubberyCreationForm
{
	private:
		Form	&target;

	public:
		ShrubberyCreationForm(Form &form);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &copy);
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif
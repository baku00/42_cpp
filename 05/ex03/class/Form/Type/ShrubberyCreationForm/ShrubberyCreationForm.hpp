#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "../../Form.hpp"
# include "Config/Config.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
	private:
		std::string		target;
		virtual void	action() const;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
};

#endif

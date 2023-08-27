#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string		target;
		virtual void	action() const;

	public:
		ShrubberyCreationForm(std::string target);
};

#endif

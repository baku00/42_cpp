#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "../../AForm.hpp"
# include "Config/Config.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
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

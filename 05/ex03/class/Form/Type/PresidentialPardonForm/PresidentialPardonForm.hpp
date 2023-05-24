#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "../../Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
	private:
		std::string		target;
		virtual void	action() const;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
};

#endif

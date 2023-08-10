#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		std::string		target;
		virtual void	action() const;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string target);
};

#endif

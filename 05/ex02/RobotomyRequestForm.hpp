#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "AForm.hpp"
# include "Random.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		std::string		target;
		virtual void	action() const;

	public:
		RobotomyRequestForm(std::string target);
};

#endif

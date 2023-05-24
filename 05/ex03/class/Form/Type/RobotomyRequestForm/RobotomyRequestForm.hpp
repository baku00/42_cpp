#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"
# include "../../Form.hpp"
# include "../../../Utils/Random/Random.hpp"

class Form;

class RobotomyRequestForm : public Form
{
	private:
		std::string		target;
		virtual void	action() const;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
};

#endif

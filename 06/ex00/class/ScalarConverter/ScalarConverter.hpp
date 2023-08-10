#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Config.hpp"

class ScalarConverter
{
	public:
		

	private:
		std::string	_str;
};

std::ostream	&operator<<(std::ostream &out, ScalarConverter const &bureaucrat);

#endif
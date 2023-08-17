#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
	double dbl = std::strtod(literal.c_str(), NULL);

	bool possible = dbl - static_cast<int>(dbl) >= 0 && dbl - static_cast<int>(dbl) < 1;
	if (!possible)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nan" << std::endl;
		std::cout << "double: nanf" << std::endl;
		return ;
	}

	double d = dbl;
	if (!std::isdigit(literal[0]))
		d = static_cast<double>(literal[0]);
	float f = static_cast<float>(d);
	char c = static_cast<char>(d);

	std::cout << "char: ";
	if (!std::isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;

	std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: ";
	if (f - static_cast<int>(f) == 0)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;

	std::cout << "double: ";
	if (d - static_cast<int>(d) == 0)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}

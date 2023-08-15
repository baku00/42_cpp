#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
	char c = static_cast<char>(std::atoi(literal.c_str()));
	float f = static_cast<float>(std::atof(literal.c_str()));
	double d = static_cast<double>(std::atof(literal.c_str()));

	std::ostringstream stream;
	stream << f;
	std::string floatString = stream.str();

	if (literal[literal.length() - 1] == 'f')
	{
	}

	bool impossible = d - static_cast<int>(d) == 0 ? d : static_cast<double>(std::atof(literal.c_str()));

	std::cout << "char: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;

	std::cout << "int: ";
	if (impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << (static_cast<int>(c)) << std::endl;

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

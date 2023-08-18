#include "ScalarConverter.hpp"



void ScalarConverter::convert(const std::string& literal) {
	if (isImpossible(literal))
		return ScalarConverter::printImpossible();

	bool is_char = ScalarConverter::isChar(literal);
	bool is_int = ScalarConverter::isInt(literal);
	bool is_float = ScalarConverter::isFloat(literal);
	bool is_double = ScalarConverter::isDouble(literal);

	if (!is_char && !is_int && !is_float && !is_double)
		return ScalarConverter::printImpossible();

	char c = 0;
	int i = 0;
	float f = 0;
	double d = 0;

	if ((is_double || is_float || is_int) && ScalarConverter::inOverflow(literal))
		return ScalarConverter::printImpossible();

	if (is_int)
	{
		i = std::atoi(literal.c_str());
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	else if (is_char)
	{
		c = literal[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	else if (is_double)
	{
		d = std::atof(literal.c_str());
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
	}
	else if (is_float)
	{
		f = std::atof(literal.c_str());
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
	}

	ScalarConverter::printChar(c);
	ScalarConverter::printInt(i);
	ScalarConverter::printFloat(f);
	ScalarConverter::printDouble(d);
}

bool ScalarConverter::inOverflow(const std::string &literal)
{
	size_t i = 0;

	while (i < literal.length() && literal[i] != '.')
		i++;

	std::string decimal = literal.substr(0, i);
	if (literal.length() > 11)
		return true;
	if (literal.length() >= 10)
	{
		if (literal[0] == '-')
		{
			if (literal.compare("-2147483648") > 0)
				return true;
		}
		else
		{
			if (literal.compare("2147483647") > 0)
				return true;
		}
	}
	return false;
}

void ScalarConverter::printImpossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nan" << std::endl;
	std::cout << "double: nanf" << std::endl;
}

bool ScalarConverter::isImpossible(const std::string& literal) {
	if (literal[0] == '.')
		return true;
	if (!literal.compare("nan") || !literal.compare("nanf"))
		return true;
	if (!literal.compare("inf") || !literal.compare("inff"))
		return true;
	if (!literal.compare("-inf") || !literal.compare("-inff"))
		return true;
	if (!literal.compare("+inf") || !literal.compare("+inff"))
		return true;
	if ((!literal.compare("-") || !literal.compare("+")) && literal.length() == 1)
		return true;
	
	int dot = 0;
	int alpha = 0;
	int num = 0;
	int less = 0;
	int more = 0;

	for (size_t i = 0; i < literal.length(); i++)
	{
		if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != '-' && literal[i] != '+')
			alpha++;
		if (alpha > 1)
			return true;
		if (literal[i] == '.')
			dot++;
		if (dot > 1)
			return true;
		if (std::isdigit(literal[i]))
			num++;
		if (literal[i] == '-')
			less++;
		if (less > 1)
			return true;
		if (literal[i] == '+')
			more++;
		if (more > 1)
			return true;
	}

	if (less > 1 || more > 1)
		return true;

	if (less > 0 && more > 0)
		return true;

	if (num == 0 && literal.length() > 1)
		return true;
	
	if (alpha > 0 && literal.length() > 1)
	{
		if (literal[literal.length() - 1] != 'f')
			return true;
	}

	return false;
}

bool ScalarConverter::isChar(const std::string& literal) {
	if (literal.length() != 1)
		return false;
	if (!std::isprint(literal[0]))
		return false;
	return true;
}

bool ScalarConverter::isInt(const std::string& literal) {
	int start_index = literal[0] == '-' || literal[0] == '+' ? 1 : 0;

	for (size_t i = start_index; i < literal.length(); i++)
	{
		if (!std::isdigit(literal[i]))
			return false;
	}

	return true;
}

bool ScalarConverter::isFloat(const std::string& literal) {
	int start_index = literal[0] == '-' || literal[0] == '+' ? 1 : 0;

	if (literal[literal.length() - 1] != 'f')
		return false;

	for (size_t i = start_index; i < literal.length() - 1; i++)
	{
		if (!std::isdigit(literal[i]) && literal[i] != '.')
			return false;
	}
	return true;
}

bool ScalarConverter::isDouble(const std::string& literal) {
	int start_index = literal[0] == '-' || literal[0] == '+' ? 1 : 0;
	int dot = 0;

	for (size_t i = start_index; i < literal.length(); i++)
	{
		if (literal[i] == '.')
			dot++;
		if (!std::isdigit(literal[i]) && literal[i] != '.')
			return false;
	}
	if (dot != 1)
		return false;
	return true;
}

void ScalarConverter::printChar(char c) {
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::printInt(int i) {
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f) {
	std::cout << "float: ";

	if (f - static_cast<int>(f) == 0)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
}

void ScalarConverter::printDouble(double d) {
	std::cout << "double: ";

	if (d - static_cast<int>(d) == 0)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}

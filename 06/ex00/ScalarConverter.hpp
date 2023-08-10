#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	private:

		ScalarConverter(void);

		std::string const _str;
		char const _char;
		int const _int;
		float const _float;
		double const _double;

	public:
		ScalarConverter(std::string const &str);
		ScalarConverter(ScalarConverter const &src);
		~ScalarConverter(void);

		ScalarConverter &operator=(ScalarConverter const &rhs);

		void convert(void);
};

#endif
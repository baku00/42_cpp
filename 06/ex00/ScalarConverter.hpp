#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <string>
#include <typeinfo>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <stdlib.h>

class ScalarConverter {
public:
	static void convert(const std::string& literal);

	private:
		ScalarConverter();
		~ScalarConverter();

		static bool isChar(const std::string& literal);
		static bool isInt(const std::string& literal);
		static bool isFloat(const std::string& literal);
		static bool isDouble(const std::string& literal);
		static bool isImpossible(const std::string& literal);
		static std::string isException(const std::string& literal);

		static void printImpossible();
		static void printException(const std::string &literal);

		static void printChar(char c);
		static void printInt(int i);
		static void printFloat(float f);
		static void printDouble(double d);

		static bool inOverflow(const std::string& literal);
};

#endif // SCALARCONVERTER_H

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <string>
#include <typeinfo>
#include <iostream>
#include <limits>
#include <cmath>

class ScalarConverter {
public:
	static void convert(const std::string& literal);

private:
	static bool isChar(const std::string& literal);
	static bool isInt(const std::string& literal);
	static bool isFloat(const std::string& literal);
	static bool isDouble(const std::string& literal);

	template <typename T>
	static void convertAndPrint(T value);

	template <typename DestType, typename SrcType>
	static void convertAndPrintWithType(SrcType value);
};

#endif // SCALARCONVERTER_H

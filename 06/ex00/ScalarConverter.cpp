	#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
	if (ScalarConverter::isChar(literal)) {
		char value = literal[1];
		std::cout << "Char: " << value << std::endl;
		ScalarConverter::convertAndPrint(value);
	}
	else if (ScalarConverter::isInt(literal)) {
		int value = atoi(literal.c_str());
		std::cout << "Int: " << value << std::endl;
		ScalarConverter::convertAndPrint(value);
	}
	else if (ScalarConverter::isFloat(literal)) {
		float value = atof(literal.c_str());
		std::cout << "Float: " << value << std::endl;
		ScalarConverter::convertAndPrint(value);
	}
	else if (ScalarConverter::isDouble(literal)) {
		double value = atof(literal.c_str());
		std::cout << "Double: " << value << std::endl;
		ScalarConverter::convertAndPrint(value);
	}
	else {
		std::cout << "Invalid literal format" << std::endl;
	}
}

bool ScalarConverter::isChar(const std::string& literal) {
	return (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'');
}

bool ScalarConverter::isInt(const std::string& literal) {
	try {
		atoi(literal.c_str());
		return true;
	} catch (...) {
		return false;
	}
}

bool ScalarConverter::isFloat(const std::string& literal) {
	try {
		atof(literal.c_str());
		return true;
	} catch (...) {
		return false;
	}
}

bool ScalarConverter::isDouble(const std::string& literal) {
	try {
		atof(literal.c_str());
		return true;
	} catch (...) {
		return false;
	}
}

template <typename T>
void ScalarConverter::convertAndPrint(T value) {
	ScalarConverter::convertAndPrintWithType<float>(value);
	ScalarConverter::convertAndPrintWithType<double>(value);
	ScalarConverter::convertAndPrintWithType<int>(value);
}

template <typename DestType, typename SrcType>
void ScalarConverter::convertAndPrintWithType(SrcType value) {
	if (std::numeric_limits<DestType>::is_specialized) {
		if (value > std::numeric_limits<DestType>::max() || value < std::numeric_limits<DestType>::min()) {
			std::cout << "Conversion impossible due to overflow" << std::endl;
			return;
		}
	}
	std::cout << "Converted to " << typeid(DestType).name() << ": " << static_cast<DestType>(value) << std::endl;
}
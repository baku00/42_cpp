#include <iostream>
#include <ctime>
#include <cstring>
#include "BitcoinExchange.hpp"
#include "Config.hpp"

int	usage()
{
	std::cout << "Usage: ./btc <file>" << std::endl;
	return (1);
}

int main(int argc, char **argv) {
	if (argc != 2)
		return usage();
	BitcoinExchange exchange;
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error: could not open file" << std::endl;
		return 1;
	}

	std::string line = "";
	std::string title = "date | value";
	std::string separator = " | ";
	float rate = 0;
	int line_number = 0;

	while (std::getline(file, line))
	{
		if (!line_number && line.substr(0, line.length() - 1) != title)
		{
			std::cout << "Error: header must be '" << title << "'" << std::endl;
			return 1;
		}
		else if (line_number)
		{
			bool has_error = false;
			std::size_t findIndex = line.find(separator);
			std::string date = line.substr(0, findIndex);
			std::string value = "-1";
			if (findIndex < line.length())
			{
				int start = findIndex + separator.length();
				value = line.substr(start, (line.length() - start) - 1);
			}
			if (!exchange.isValidDate(date))
			{
				std::cout << "Error: bad input => " << date << std::endl;
				has_error = true;
			}
			rate = std::atof(value.c_str());
			std::string rate_error = exchange.isValidValue(rate);
			if (rate_error.length())
			{
				std::cout << "Error: " << rate_error << std::endl;
				has_error = true;
			}
			if (has_error)
				continue;
			std::cout << date << " => " << value << " = " << (rate * exchange.findRate(date)) << std::endl;
		}
		line_number += 1;
	}

	file.close();

	return 0;
}

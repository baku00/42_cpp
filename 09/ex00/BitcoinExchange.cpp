#include "BitcoinExchange.hpp"
#include "Config.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
	this->_filename = filename;
	this->parseData();
	this->parseInput();
	std::cout << "Display input map" << std::endl;
	this->printMap(this->_input);
	std::cout << std::endl;
	// std::cout << "Display data map" << std::endl;
	// this->printMap(this->_data);
}

void	BitcoinExchange::printMap(std::map<std::time_t, float> map)
{
	for (std::map<std::time_t, float>::iterator it = map.begin(); it != map.end(); it++)
	{
		std::tm* timeInfo = std::localtime(&it->first);
		std::cout << timeInfo->tm_year + 1900 << "-" << timeInfo->tm_mon + 1 << "-" << timeInfo->tm_mday << "; " << it->second << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange() {}

float	BitcoinExchange::convertToFloat(std::string _value)
{
	float value = std::atof(_value.c_str());
	if (value > Config::getMaxValue())
		value = -1;
	return value;
}

bool	BitcoinExchange::isValidDate(std::string _date)
{
	return this->cnvertDateToTimestamp(_date) != -1;
}

bool	BitcoinExchange::compareDate(std::string date1, std::string date2)
{
	if (!this->isValidDate(date1) || !this->isValidDate(date2))
		return false;
	return (this->cnvertDateToTimestamp(date1) < this->cnvertDateToTimestamp(date2));
}

std::time_t	BitcoinExchange::cnvertDateToTimestamp(std::string _date)
{
	struct tm date = {};
	if (!strptime(_date.c_str(), "%Y-%m-%d", &date))
		return false;
	return std::mktime(&date);
}

bool BitcoinExchange::isValidPrice(float price)
{
	return price >= Config::getMinValue() && price <= Config::getMaxValue();
}

void	BitcoinExchange::printData() {}

float	BitcoinExchange::findRate(std::string date)
{
	if (!this->isValidDate(date))
		return -1;

	std::time_t timestamp = this->cnvertDateToTimestamp(date);

	if (timestamp == -1)
	{
		std::cout << "Error: invalid date (" << date << ")" << std::endl;
		return -1;
	}

	if (timestamp > Config::getMaxDate())
	{
		std::cout << "Error: date is in the future (" << date << ")" << std::endl;
		return -1;
	}

	std::map<std::time_t, float>::iterator it;
	while ((it = this->_input.find(timestamp)) == this->_input.end())
		timestamp -= 86400;

	return it->second;
}

void	BitcoinExchange::parseInput()
{
	this->_input = this->parse(this->_filename, "date | value", " | ");
}

void	BitcoinExchange::parseData()
{
	this->_data = this->parse(Config::getData(), "date,exchange_rate", ",");
}

std::map<std::time_t, float>	BitcoinExchange::parse(std::string filename, std::string title, std::string separator)
{
	std::map<std::time_t, float> map;
	std::ifstream file(filename.c_str());
	if (!file)
	{
		std::cout << "Error: cannot open file" << std::endl;
		map.clear();
		return map;
	}

	std::string line;
	float rate;

	while (std::getline(file, line))
	{
		if (line != title)
		{
			std::size_t findIndex = line.find(separator);
			std::string date = line.substr(0, findIndex);
			std::string value = "-1";
			if (findIndex < line.length())
				line.substr(findIndex, line.length() - findIndex);
			std::cout << "Separator: (" << separator << ")" << std::endl;
			std::cout << "Find Index: " << findIndex << std::endl;
			std::cout << "Date: " << date << std::endl;
			std::cout << "Value: " << value << std::endl;
			std::cout << "Line: " << line << std::endl;
			std::cout << "Line.length: " << line.length() << std::endl;
			std::cout << std::endl;
			rate = this->convertToFloat(value);
			if (!this->isValidDate(date))
			{
				std::cout << "Error: invalid date" << std::endl;
				continue;
			}
			if (!this->isValidPrice(rate))
			{
				std::cout << "Error: invalid price" << std::endl;
				continue;
			}
			map.insert(std::pair<std::time_t, float>(this->cnvertDateToTimestamp(date), rate));
			std::cout << std::endl;
		}
	}

	file.close();
	return map;
}

#include "BitcoinExchange.hpp"
#include "Config.hpp"

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

float	BitcoinExchange::convertToFloat(std::string _value)
{
	float value = std::atof(_value.c_str());
	if (value > Config::getMaxValue())
		value = -1;
	return value;
}

bool BitcoinExchange::isValidDate(std::string _date)
{
	return this->cnvertDateToTimestamp(_date) != -1;
}

bool BitcoinExchange::compareDate(std::string date1, std::string date2)
{
	if (!this->isValidDate(date1) || !this->isValidDate(date2))
		return false;
	return (this->cnvertDateToTimestamp(date1) < this->cnvertDateToTimestamp(date2));
}

std::time_t BitcoinExchange::cnvertDateToTimestamp(std::string _date)
{
	struct tm date = {};
	if (!strptime(_date.c_str(), "%Y-%m-%d", &date))
		return false;
	return std::mktime(&date);
}

// bool BitcoinExchange::isValidPrice(std::string price)
// {
// 	return true;
// }

// bool BitcoinExchange::isValidAmount(std::string amount)
// {
// 	return true;
// }

// bool BitcoinExchange::isValidLine(std::string line)
// {
// 	return true;
// }

// bool BitcoinExchange::isValidFile(std::string filename)
// {
// 	return true;
// }

void BitcoinExchange::parseFile(std::string filename)
{
	std::cout << "Parsing file: " << filename << std::endl;
}

void BitcoinExchange::printData()
{
}

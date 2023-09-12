#include "BitcoinExchange.hpp"
#include "Config.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->parseData();
	std::cout << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

void	BitcoinExchange::printMap(std::map<std::time_t, float> map)
{
	for (std::map<std::time_t, float>::iterator it = map.begin(); it != map.end(); it++)
	{
		std::tm* timeInfo = std::localtime(&it->first);
		std::cout << timeInfo->tm_year + 1900 << "-" << timeInfo->tm_mon + 1 << "-" << timeInfo->tm_mday << "; " << it->second << std::endl;
	}
}

std::map<std::time_t, float>	BitcoinExchange::getMap() const
{
	return this->_data;
}

BitcoinExchange::~BitcoinExchange() {
	this->_data.clear();
}

float	BitcoinExchange::convertToFloat(std::string _value)
{
	float value = std::atof(_value.c_str());
	if (value > Config::getMaxValue())
		value = -1;
	return value;
}

bool	BitcoinExchange::isValidDate(std::string _date)
{
	std::time_t timestamp = this->convertDateToTimestamp(_date);
	return timestamp > 0 && timestamp > this->convertDateToTimestamp(Config::getMinDate());
}

std::string	BitcoinExchange::isValidValue(float value)
{
	if (value < 0)
		return "not a positive number";
	if (value > Config::getMaxValue())
		return "too large a number";
	return "";
}

std::time_t	BitcoinExchange::convertDateToTimestamp(std::string _date)
{
	struct tm date = {};
	if (!strptime(_date.c_str(), "%Y-%m-%d", &date))
		return false;
	return std::mktime(&date);
}

float	BitcoinExchange::findRate(std::string date)
{
	if (!this->isValidDate(date))
		return -1;

	std::time_t timestamp = this->convertDateToTimestamp(date);

	std::map<std::time_t, float>::iterator it;
	while ((it = this->_data.find(timestamp)) == this->_data.end())
		timestamp -= 86400;

	return it->second;
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
				value = line.substr(findIndex + separator.length());
			rate = std::atof(value.c_str());
			map.insert(std::pair<std::time_t, float>(this->convertDateToTimestamp(date), rate));
		}
	}

	file.close();
	return map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->_data = rhs._data;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream & out, BitcoinExchange const & instance)
{
	std::map<std::time_t, float> map = instance.getMap();

	for (std::map<std::time_t, float>::iterator it = map.begin(); it != map.end(); it++)
	{
		std::tm* timeInfo = std::localtime(&it->first);
		out << timeInfo->tm_year + 1900 << "-" << timeInfo->tm_mon + 1 << "-" << timeInfo->tm_mday << "; " << it->second << std::endl;
	}
	return out;
}
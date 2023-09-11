#ifndef BITCOIN_EXCHANGE_H
# define BITCOIN_EXCHANGE_H

# include <fstream>
# include <string>
# include <map>
# include <iostream>
# include <sstream>
# include <ctime>
# include <cstdlib>

class BitcoinExchange
{
	private:
		std::map<std::time_t, float> _bcExchangeRate;

		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		// bool isValidPrice(std::string price);
		// bool isValidAmount(std::string amount);
		// bool isValidLine(std::string line);
		// bool isValidFile(std::string filename);

		void parseFile(std::string filename);
		void printData();

	public:
		bool isValidDate(std::string date);
		bool compareDate(std::string date1, std::string date2);
		std::time_t cnvertDateToTimestamp(std::string date);
		float convertToFloat(std::string _value);

		BitcoinExchange();
		~BitcoinExchange();
		double getRate(std::string date);
};


#endif
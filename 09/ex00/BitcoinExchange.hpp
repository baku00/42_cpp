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
		std::map<std::time_t, float>	_input;
		std::map<std::time_t, float>	_data;
		std::string						_filename;

		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		bool isValidPrice(float price);
		// bool isValidAmount(std::string amount);
		// bool isValidLine(std::string line);
		// bool isValidFile(std::string filename);

		std::map<std::time_t, float>	parse(std::string filename, std::string title, std::string separator);
		void	parseData();
		void	printData();
		void	printMap(std::map<std::time_t, float> map);

	public:
		bool	isValidDate(std::string date);
		bool	compareDate(std::string date1, std::string date2);
		std::time_t	cnvertDateToTimestamp(std::string date);
		float	convertToFloat(std::string _value);
		void	parseInput();
		BitcoinExchange(std::string filename);
		~BitcoinExchange();
		float findRate(std::string date);

};

#endif
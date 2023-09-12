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
		std::map<std::time_t, float>	_data;

		std::map<std::time_t, float>	parse(std::string filename, std::string title, std::string separator);
		void	parseData();
		void	printMap(std::map<std::time_t, float> map);

	public:
		bool	isValidDate(std::string date);
		std::string	isValidValue(float value);
		bool	compareDate(std::string date1, std::string date2);
		std::time_t	convertDateToTimestamp(std::string date);
		float	convertToFloat(std::string _value);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		BitcoinExchange();
		~BitcoinExchange();
		std::map<std::time_t, float>	getMap() const;
		float findRate(std::string date);

};

std::ostream	& operator<<(std::ostream & out, BitcoinExchange const & instance);

#endif
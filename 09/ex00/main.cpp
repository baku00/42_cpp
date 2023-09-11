#include <iostream>
#include <ctime>
#include <cstring>
#include "BitcoinExchange.hpp"

int main() {
	BitcoinExchange exchange;
	std::cout << "IsValidDate: " << exchange.isValidDate("2023-02-28") << std::endl;
	return 0;
}

#include "./Utils.hpp"

void	Utils::clear_screen()
{
	for (int i = 0; i < 100; i++)
		std::cout << std::endl;
}

std::string	Utils::readline(std::string display)
{
	std::string value;

	std::cout << display << std::flush;
	std::getline(std::cin, value);
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		std::exit(1);
	return (value);
}

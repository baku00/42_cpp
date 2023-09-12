#include "RPN.hpp"

int	usage()
{
	std::cout << "Usage: ./rpn <expression>" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return usage();
	try
	{
		std::cout << RPN::calculate(argv[1]) << std::endl;
	}
	catch (const char *e)
	{
		std::cerr << e << std::endl;
		return (1);
	}
	return (0);
}
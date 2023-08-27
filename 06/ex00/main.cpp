#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	if (argc <= 1)
	{
		std::cout << "Usage: ./convert [literal]" << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}

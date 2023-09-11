#include "PmergeMe.hpp"

void	usage(void)
{
	std::cout << RED << "Usage: /pmerge <your list of number>" << RESET << std::endl;
	exit(1);
}

void	not_enough_arguments(char *arg)
{
	std::cout << BLUE << "The result is: " << arg << RESET << std::endl;
	usage();
}

int main(int argc, char **argv)
{
	if (argc < 2)
		usage();
	if (argc == 2)
		not_enough_arguments(argv[1]);
	try
	{
		PmergeMe numbers(argv);
		numbers.vector();
		numbers.list();
		numbers.display();
	}
	catch (const char *e)
	{
		std::cerr << RED << e << RESET << std::endl;
		return (1);
	}
	return (0);
}
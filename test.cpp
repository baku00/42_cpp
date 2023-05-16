#include <iostream>
#include <stdlib.h>

int main()
{
	int num = 0;
	while (num < 2000000000)
	{
		num++;
	}
	std::cout << num << std::endl;
	return (0);
}
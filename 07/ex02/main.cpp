#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
// #include <iostream>
// #include "Array.hpp"
// int main()
// {
// 	int *a = new int();
// 	std::cout << "a: " << a << std::endl;
// 	delete a;
// 	// Array<int> b(5);

// 	// for (unsigned int i = 0; i < a.size(); i++)
// 	// 	a[i] = i;

// 	// for (unsigned int i = 0; i < b.size(); i++)
// 	// 	b[i] = a[i] * 2;

// 	// std::cout << "a: ";
// 	// for (unsigned int i = 0; i < a.size(); i++)
// 	// 	std::cout << a[i] << " ";
// 	// std::cout << std::endl;

// 	// std::cout << "b: ";
// 	// for (unsigned int i = 0; i < b.size(); i++)
// 	// 	std::cout << b[i] << " ";
// 	// std::cout << std::endl;
// 	// std::cout << std::endl;

// 	// std::cout << "Try to edit a" << std::endl;
// 	// for (unsigned int i = 0; i < a.size(); i++)
// 	// 	a[i] = a[i] * 3;

// 	// std::cout << "a: ";
// 	// for (unsigned int i = 0; i < a.size(); i++)
// 	// 	std::cout << a[i] << " ";
	
// 	// std::cout << std::endl;
// 	// std::cout << "b: ";
// 	// for (unsigned int i = 0; i < b.size(); i++)
// 	// 	std::cout << b[i] << " ";
	
// 	// std::cout << std::endl;
// 	// std::cout << std::endl;
// 	// std::cout << "If array b isn't changed, the program work" << std::endl;

// 	// std::cout << "Try access to invalid index of a" << std::endl;
// 	// try
// 	// {
// 	// 	std::cout << "a[10]: " << a[10] << std::endl;
// 	// }
// 	// catch(const std::exception& e)
// 	// {
// 	// 	std::cerr << e.what() << '\n';
// 	// }
	

// 	return 0;
// }
#include <iostream>
#include "./template/iter.hpp"

void print(int& elem) {
	std::cout << elem << std::endl;
}

int main( void ) {
	int a[] = {1, 2, 3, 4, 5};
	::iter(a, 5, print);
	return 0;
}

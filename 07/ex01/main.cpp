#include <iostream>
#include "./template/iter.hpp"

struct PrintElement {
	void operator()(int& elem) const {
		std::cout << elem << std::endl;
	}
};

int main( void ) {
	int a[] = {1, 2, 3, 4, 5};
	::iter(a, 5, PrintElement());
	return 0;
}

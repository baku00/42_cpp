#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data *data = new Data("Hello");

	std::cout << "Original:" << std::endl;
	std::cout << *data << std::endl;
	std::cout << std::endl;

	std::cout << "Cast to uintptr_t:" << std::endl;
	const uintptr_t raw = Serializer::serialize(data);
	std::cout << raw << std::endl;
	std::cout << std::endl;

	std::cout << "Cast back to Data:" << std::endl;
	const Data *deserialized = Serializer::deserialize(raw);
	std::cout << deserialized << std::endl;
	std::cout << std::endl;

	delete data;

	return 0;
}

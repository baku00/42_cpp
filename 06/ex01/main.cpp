#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Data *data = new Data("Hello");

	const uintptr_t raw = Serializer::serialize(data);
	std::cout << raw << std::endl;

	const Data *deserialized = Serializer::deserialize(raw);
	std::cout << deserialized->getName() << std::endl;

	delete data;

	return 0;
}

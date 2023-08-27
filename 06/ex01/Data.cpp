#include "Data.hpp"

Data::Data() : _name("default") {}

Data::Data(const std::string &name) : _name(name) {}

Data::Data(const Data &copy) : _name(copy._name) {}

Data &Data::operator=(const Data &copy) {
	if (this != &copy)
		_name = copy._name;
	return *this;
}

Data::~Data() {}

std::string Data::getName() const {
	return _name;
}

std::ostream &operator<<(std::ostream &out, const Data &data) {
	out << data.getName();
	return out;
}

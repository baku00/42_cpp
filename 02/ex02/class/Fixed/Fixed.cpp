#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << bits;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return (out);
}

int Fixed::getRawBits() const {
	return (value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return ((float)value / (1 << bits));
}

int Fixed::toInt() const {
	return (value >> bits);
}


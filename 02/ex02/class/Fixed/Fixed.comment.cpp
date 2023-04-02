#include "Fixed.hpp"

Fixed &Fixed::operator*(const Fixed &fixed) {
	// getRawBits => actual value
	// toFloat => actual value convert in float
	//
	// this = Fixed(10):
	// - Value = 10 * (1 << 8) = 10 * 256 = 2560
	// - RawBits = 2560
	// - ToFloat = 2560 / (1 << 8) = 2560 / 256 = 10
	//
	// fixed = Fixed(2.5):
	// - Value = 2.5 * (1 << 8) = 2.5 * 256 = 640
	// - RawBits = 640
	// - ToFloat = 640 / (1 << 8) = 640 / 256 = 2.5
	//
	// fixed.getRawBits() = 640
	// fixed.toFloat() = 2.5
	//
	// this->value = 2560
	// this->toFloat() = 10
	//
	// 10 * 2.5 = 25
	//
	// this->value = 25 * (1 << 8) = 25 * 256 = 6400
	// this->toFloat() = 6400 / (1 << 8) = 6400 / 256 = 25
	this->value *= fixed.toFloat();
	return *this;
}

#include <iostream>
#include "Span.hpp"

int main( void ) {
	std::cout << "Test 0: Create a span of size 0" << std::endl;
	Span empty_span = Span(0);
	std::cout << "Result: (" << empty_span << ")" << std::endl;

	std::cout << "Test 0.1: Add an element to the span" << std::endl;
	try {
		empty_span.addNumber(6);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << empty_span << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "Test 1: Create a span of size 1" << std::endl;
	Span span_of_size_1 = Span(1);
	std::cout << "Result: (" << span_of_size_1 << ")" << std::endl;

	std::cout << "Test 1.1: Add an element to the span" << std::endl;
	try {
		span_of_size_1.addNumber(6);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span_of_size_1 << ")" << std::endl;

	std::cout << "Test 1.2: Add a second element" << std::endl;
	try {
		span_of_size_1.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span_of_size_1 << ")" << std::endl;
	std::cout << std::endl;

	std::cout << "Test 2: Create span of size 5" << std::endl;
	Span sp = Span(5);
	std::cout << "Result: (" << sp << ")" << std::endl;

	std::cout << "Test 2.1: Add 5 to the span" << std::endl;
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Result: (" << sp << ")" << std::endl;

	std::cout << "Test 2.2: Add a 6th element" << std::endl;
	try {
		sp.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << sp << ")" << std::endl;
	std::cout << std::endl;


	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	return 0;
}

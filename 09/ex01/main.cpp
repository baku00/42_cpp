#include "Span.hpp"

void wait(int second)
{
	std::time_t start = std::time(NULL);
	while (std::time(NULL) - start < second);
}

void	test0()
{
	std::cout << "Test 0: Span of size 0" << std::endl;
	Span span = Span(0);
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 0.1: Add an element to the span" << std::endl;
	try {
		span.addNumber(6);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 0.2: Find shortest and longest span" << std::endl;
	std::cout << "Shortest: " << std::flush;
	try
	{ std::cout << span.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Longest: " << std::flush;
	try
	{ std::cout << span.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
}

void	test1()
{
	std::cout << "Test 1: Span of size 1" << std::endl;
	Span span = Span(1);
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 1.1: Add an element to the span" << std::endl;
	try {
		span.addNumber(6);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 1.2: Add a second element" << std::endl;
	try {
		span.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 1.3: Find shortest and longest span" << std::endl;
	std::cout << "Shortest: " << std::flush;
	try
	{ std::cout << span.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Longest: " << std::flush;
	try
	{ std::cout << span.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
}

void	test2()
{
	std::cout << "Test 2: Span of size 5" << std::endl;
	Span span = Span(5);
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 2.1: Add 5 to the span" << std::endl;
	try {
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 2.2: Add a 6th element" << std::endl;
	try {
		span.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;

	std::cout << "Test 2.3: Find shortest and longest span" << std::endl;
	std::cout << "Shortest: " << std::flush;
	try
	{ std::cout << span.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Longest: " << std::flush;
	try
	{ std::cout << span.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
}

void	test3()
{
	const int size = 10000;

	std::cout << "Wait 2 seconds before start test number 3... (Big array, " << size << ")" << std::endl;
	std::cout << "Each test will take 2 seconds to complete" << std::endl;
	wait(2);

	std::cout << "Test 3: Span of size " << size << std::endl;
	Span span = Span(size);
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 3.1: Add 5 to the span" << std::endl;
	try {
		span.fill();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 3.2: Add a " << (size + 1) << "th element" << std::endl;
	try {
		span.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 3.3: Find shortest and longest span" << std::endl;
	std::cout << "Shortest: " << std::flush;
	try
	{ std::cout << span.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Longest: " << std::flush;
	try
	{ std::cout << span.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
}

void	test4()
{
	const int size = 1000000;

	std::cout << "Wait 2 seconds before start test number 3... (Max array, " << size << ")" << std::endl;
	std::cout << "Each test will take 2 seconds to complete" << std::endl;
	wait(2);

	std::cout << "Test 4: Span of size " << size << std::endl;
	Span span = Span(size);
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 4.1: Add 5 to the span" << std::endl;
	try {
		span.fill();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 4.2: Add a " << (size + 1) << "th element" << std::endl;
	try {
		span.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Result: (" << span << ")" << std::endl;
	wait(2);

	std::cout << "Test 4.3: Find shortest and longest span" << std::endl;
	std::cout << "Shortest: " << std::flush;
	try
	{ std::cout << span.shortestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }

	std::cout << "Longest: " << std::flush;
	try
	{ std::cout << span.longestSpan() << std::endl; }
	catch(const std::exception& e)
	{ std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
}

int main( void ) {
	test0();
	test1();
	test2();
	test3();
	// test4();
	return 0;
}

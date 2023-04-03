#include "class/Fixed/Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( Fixed( 5.0f ) * Fixed( 2 ) );

	std::cout << "Manage A" << std::endl;
	std::cout << "\ta = " << a << std::endl;
	std::cout << "\t++a = " << ++a << std::endl;
	std::cout << "\ta = " << a << std::endl;
	std::cout << "\ta + 1 = " << a + 1 << std::endl;
	std::cout << "\ta = " << a << std::endl;
	std::cout << "\ta++ = " << a++ << std::endl;
	std::cout << "\ta = " << a << std::endl;
	std::cout << "\tCalcul de A terminé" << std::endl;
	std::cout << std::endl;

	std::cout << "Manage B" << std::endl;
	std::cout << "\tb = " << b << std::endl;
	std::cout << "\tCalcul de B terminé" << std::endl;

	std::cout << std::endl;
	std::cout << "Other Management" << std::endl;
	std::cout << "\tMax( a, b ) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "\tFixed(20) / b = " << ( Fixed(20) / b ) << std::endl;
	std::cout << std::endl;

	// std::cout << "1:" << a << std::endl;
	// std::cout << "2:" << ++a << std::endl;
	// std::cout << "3:" << a << std::endl;
	// std::cout << "3.5:" << a++ << std::endl;
	// std::cout << "4:" << a << std::endl;
	// std::cout << "5:" << b << std::endl;
	// std::cout << "6:" << Fixed::max( a, b ) << std::endl;
	return (0);
}

#include "Fixed.hpp"

// #include <iostream>
// int main( void ) {
// 	Fixed const a(1);
// 	Fixed const b(5.53f);
// 	std::cout << b + a << std::endl;
// 	// std::cout << ++a << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << a++ << std::endl;
// 	// std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	// std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

#include <iostream>
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.5f ) * Fixed( 2.0f ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

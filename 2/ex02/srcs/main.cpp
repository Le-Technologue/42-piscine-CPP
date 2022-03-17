#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" << std::endl;

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	std::cout << "\n\n[ ~~~~~ MORE TESTS ~~~~~ ]\n" << std::endl;

	Fixed	c(100);
	Fixed	d(4);

	std::cout << c << " - " << d << " = " << c - d << std::endl;
	std::cout << c << " + " << d << " = " << c + d << std::endl;
	std::cout << c << " / " << d << " = " << c / d << std::endl;
	std::cout << c << " / " << d << " / " << d << " = " << c / d / d << std::endl;
	std::cout << c << " * " << d << " = " << c * d << std::endl;
	std::cout << std::endl;

	Fixed	e(42);
	Fixed	f(4.2f);
	Fixed	g(4.2f);

	std::cout << "min(" << e << ", " << f << ") = " << Fixed::min(e, f) << std::endl;
	std::cout << "max(" << e << ", " << f << ") = " << Fixed::max(e, f) << std::endl;
	std::cout << std::endl;

	std::cout << e << " < " << f << " = " << (e < f) << std::endl;
	std::cout << e << " > " << f << " = " << (e > f) << std::endl;
	std::cout << f << " < " << g << " = " << (f < g) << std::endl;
	std::cout << f << " > " << g << " = " << (f > g) << std::endl;
	std::cout << std::endl;

	std::cout << f << " <= " << g << " = " << (f <= g) << std::endl;
	std::cout << f << " >= " << g << " = " << (f >= g) << std::endl;
	std::cout << std::endl;

	std::cout << f << " == " << g << " = " << (f == g) << std::endl;
	std::cout << f << " != " << g << " = " << (f != g) << std::endl;
	std::cout << e << " == " << g << " = " << (e == g) << std::endl;
	std::cout << e << " != " << g << " = " << (e != g) << std::endl;
	std::cout << std::endl;

	return (0);
}

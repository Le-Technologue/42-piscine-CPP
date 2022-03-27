#include <iostream>
#include "whatever.hpp"
#include "Fixed.hpp"

// 54gcc from the next line to comment out the following scope
int main() {

	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" << std::endl;

    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n\n[ ~~~~~ MORE TESTS ~~~~~ ]\n" << std::endl;

	std::cout << "\"Fixed x = Fixed(6.66f);\"" << std::endl;
	std::cout << "v" << std::endl;
	Fixed x = Fixed(6.66f);
	std::cout << std::endl;

	std::cout << "\"Fixed y = Fixed(8);\"" << std::endl;
	std::cout << "v" << std::endl;
	Fixed y = Fixed(8);
	std::cout << std::endl;

	std::cout << "[ x: " << x << " , y: " << y << " ]" << std::endl;
	std::cout << std::endl;

	std::cout << "\"swap( x, y );\"" << std::endl;
	std::cout << "v" << std::endl;
	swap( x, y );
	std::cout << std::endl;

	std::cout << "[ x: " << x << " , y: " << y << " ]" << std::endl;
	std::cout << std::endl;

	std::cout << "min( x, y ) = " << min( x, y ) << std::endl;
	std::cout << std::endl;

	std::cout << "max( x, y ) = " << max( x, y ) << std::endl;
	std::cout << std::endl;

	std::cout << "min( x, x ) = " << min( x, x ) << std::endl;
	std::cout << std::endl;

    return 0;
}

// Uncomment that blob of code to execute the lame unlegible checklist tests

/* class Awesome { */

/* public: */

/* Awesome(void) : _n(0) {} */
/* Awesome( int n ) : _n( n ) {} */

/* Awesome & operator= (Awesome & a) { _n = a._n; return *this; } */

/* bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); } */
/* bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } */
/* bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } */
/* bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } */
/* bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } */
/* bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } */

/* int get_n() const { return _n; } */

/* private: */

/* int _n; */
/* }; */

/* std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; } */

/* int main(void) */
/* { */
/* 	std::cout << "[ ~~~~~ CHECKLIST TESTS ~~~~~ ]\n" << std::endl; */

/* 	Awesome a(2), b(4); */
/* 	swap(a, b); */

/* 	std::cout << a << " " << b << std::endl; */
/* 	std::cout << max(a, b) << std::endl; */
/* 	std::cout << min(a, b) << std::endl; */
/* 	return (0); */
/* } */

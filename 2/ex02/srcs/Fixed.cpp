#include <cmath>
#include <iostream>
#include "Fixed.hpp"

/** Constructors * ********************************************************* */

Fixed::Fixed( void ) : _value(0) {

	/* std::cout << "Default constructor called" << std::endl; */
}

Fixed::Fixed( int value )
{
	/* std::cout << "Int constructor called" << std::endl; */
	this->_value = value << Fixed::_fractional_bits;
}

Fixed::Fixed( float value )
{
	/* std::cout << "Float constructor called" << std::endl; */
	this->_value = roundf(value * (1 << Fixed::_fractional_bits));
}

Fixed::Fixed( Fixed const & src ) {

	/* std::cout << "Copy constructor called" << std::endl; */
	*this = src;
}

/** Destructor * *********************************************************** */

Fixed::~Fixed( void ) {

	/* std::cout << "Destructor called" << std::endl; */
}

/** Accessors * ************************************************************ */

int		Fixed::getRawBits( void ) const
{
	/* std::cout << "getRawBits member function called" << std::endl; */
	return this->_value;
}

void	Fixed::setRawBits( int raw )
{
	/* std::cout << "setRawBits member function called" << std::endl; */
	this->_value = raw;
}

/** Convertors * *********************************************************** */

int		Fixed::toInt( void ) const {

	return this->_value >> Fixed::_fractional_bits;
};

float	Fixed::toFloat( void ) const {

	return this->_value / (float)(1 << Fixed::_fractional_bits);
};

/** Comparison * *********************************************************** */

bool	Fixed::operator< ( Fixed const & rhs ) const {

	return this->_value < rhs._value;
}

Fixed &	Fixed::min( Fixed &a, Fixed &b ) {

	return a < b ? a : b;
}

Fixed const &	Fixed::min( Fixed const &a, Fixed const &b ) {

	return a < b ? a : b;
}

bool	Fixed::operator> ( Fixed const & rhs ) const {

	return rhs < *this;
}

Fixed &	Fixed::max( Fixed &a, Fixed &b ) {

	return a > b ? a : b;
}

Fixed const &	Fixed::max( Fixed const &a, Fixed const &b ) {

	return a > b ? a : b;
}

bool	Fixed::operator<=( Fixed const & rhs ) const {

	return !(*this > rhs);
}

bool	Fixed::operator>=( Fixed const & rhs ) const {

	return !(*this < rhs);
}

bool	Fixed::operator==( Fixed const & rhs ) const {

	return this->_value == rhs._value;
}

bool	Fixed::operator!=( Fixed const & rhs ) const {

	return !(*this == rhs);
}

/** Assignment * *********************************************************** */

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	/* std::cout << "Copy assignment operator called" << std::endl; */
	this->_value = rhs.getRawBits();
	return *this;
};

/** Arithmetic * *********************************************************** */

Fixed	Fixed::operator+( Fixed const & rhs ) const {

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {

	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {

	return Fixed(this->toFloat() / rhs.toFloat());
}

/** Incrementation * ******************************************************* */

	// Prefix //

Fixed &	Fixed::operator++( void ) {

	this->_value++;
	return (*this);
}

Fixed &	Fixed::operator--( void ) {

	this->_value--;
	return (*this);
};

	// Postfix // (Note the dummy int param to identify it at compilation)

Fixed	Fixed::operator++( int ) {

	Fixed old_copy = *this;
	++(*this);
	return (old_copy);
}

Fixed	Fixed::operator--( int ) {

	Fixed old_copy = *this;
	--(*this);
	return (old_copy);
}

/** Serialization * ******************************************************** */

std::ostream &	operator<<( std::ostream & lhs, Fixed const & rhs ) {

	return lhs << rhs.toFloat();
}

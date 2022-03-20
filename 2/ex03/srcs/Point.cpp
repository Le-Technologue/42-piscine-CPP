#include "Point.hpp"

/** Constructors * ********************************************************* */

Point::Point( void ) : _x(Fixed()), _y(Fixed()) {
	return ;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y) {
	return ;
}

Point::Point( Fixed const x, Fixed const y ) : _x(x), _y(y) {
	return ;
}

/** Destructor * *********************************************************** */

Point::~Point( void ) {
	return ;
}

Point &	Point::operator=( Point const & rhs ) {

	(void)rhs;
	return *this;
}

/** Accessors * ************************************************************ */

Fixed const	Point::getX( void ) const {

	return this->_x;
}

Fixed const	Point::getY( void ) const {

	return this->_y;
}

/** Serialization * ******************************************************** */

std::ostream& operator<<( std::ostream& os, Point const & p ) {

	os << "(" << p.getX() << ", " << p.getY() << ")";
	return (os);
}

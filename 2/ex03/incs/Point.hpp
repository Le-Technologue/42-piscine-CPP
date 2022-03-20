#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {

private :

	const Fixed _x;
	const Fixed _y;

public :

	Point( void );
	Point( Point const & src );
	Point( Fixed const x, Fixed const y );
	~Point( void );

	Point &	operator=( Point const & rhs );

	Fixed const	getX( void ) const;
	Fixed const	getY( void ) const;
};

std::ostream &	operator<<( std::ostream & os, Point const & p );

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif

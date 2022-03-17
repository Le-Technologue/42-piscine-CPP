#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private :

	int					_value;
	static const int	_fractional_bits = 8;

public :

	Fixed( void );
	Fixed( int value );
	Fixed( float value );
	Fixed( Fixed const & src );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int raw );

	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed &	operator=( Fixed const & rhs );
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif

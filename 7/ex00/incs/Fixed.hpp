#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private :

	int					_value;
	static const int	_fractional_bits = 8;

public :

/** Construction * ********************************************************* */
	Fixed( void );
	Fixed( int const value );
	Fixed( float const value );
	Fixed( Fixed const & src );

/** Destruction * ********************************************************** */
	~Fixed( void );

/** Access * *************************************************************** */
	int		getRawBits( void ) const;
	void	setRawBits( int raw );

/** Conversion * *********************************************************** */
	int		toInt( void ) const;
	float	toFloat( void ) const;

/** Comparison * *********************************************************** */
	static Fixed &			min( Fixed &a, Fixed &b );
	static Fixed const &	min( Fixed const &a, Fixed const &b );
	static Fixed &			max( Fixed &a, Fixed &b );
	static Fixed const &	max( Fixed const &a, Fixed const &b );

	bool	operator> ( Fixed const & rhs ) const;
	bool	operator< ( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

/** Assignment * *********************************************************** */
	Fixed &	operator=( Fixed const & rhs );

/** Arithmetic * *********************************************************** */
	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

/** Incrementation * ******************************************************* */
	// Prefix //
	Fixed &	operator++( void );
	Fixed &	operator--( void );
	// Postfix //
	Fixed	operator++( int );
	Fixed	operator--( int );
};

/** Serialization * ******************************************************** */
std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif

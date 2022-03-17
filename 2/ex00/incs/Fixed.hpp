#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private :

	int					_value;
	static const int	_fractional_bits = 8;

public :

	Fixed( void ); // Default constructor
	Fixed( Fixed const & src ); // Copy constructor
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int raw );

	Fixed &	operator=( Fixed const & rhs ); // Copy assignment operator overload
};

#endif

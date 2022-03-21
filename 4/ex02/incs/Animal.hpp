#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

protected :

	std::string	_type;

	Animal( std::string type );

public :

	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal &	operator=( Animal const & rhs );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
};
#endif

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal {

private :

	Brain	*_brain;

public :

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );

	Dog &	operator=( Dog const & rhs );

	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
};
#endif

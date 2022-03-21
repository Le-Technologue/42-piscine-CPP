#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal {

private :

	Brain	*_brain;

public :

	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );

	Cat &	operator=( Cat const & rhs );

	Brain &			getBrain( void ) const;
	virtual void	makeSound( void ) const;
};
#endif

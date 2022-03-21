#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private :

	Brain	*_brain;

public :

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );

	WrongCat &	operator=( WrongCat const & rhs );

	Brain &	getBrain( void ) const;
	void	makeSound( void ) const;
};
#endif

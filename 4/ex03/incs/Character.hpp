#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter {

private:

	std::string	_name;
	AMateria*	_inventory[4];

	Character( void );

public:

	Character( std::string const & name );
	Character( Character const & copy );
	virtual ~Character( void );

	virtual Character&	operator=( Character const & rhs );

	virtual std::string const &	getName( void ) const;
	
	virtual void	equip( AMateria* m );
	virtual void	unequip( int idx );
	virtual void	use( int idx, ICharacter& target );
};
#endif

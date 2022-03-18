#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected :

	std::string	_name;
	size_t		_hp;
	size_t		_energy;
	size_t		_damage;

public :

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap &	operator=( ClapTrap const & rhs );

	void	attack( const std::string & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};
#endif

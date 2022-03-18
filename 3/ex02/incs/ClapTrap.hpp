#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected :

	ClapTrap( std::string name, size_t hp, size_t energy, size_t damage );

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

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private :

	std::string	_name;
	using	FragTrap::_hp;
	using	ScavTrap::_energy;
	using	FragTrap::_damage;

public :

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	DiamondTrap &	operator=( DiamondTrap const & rhs );

	using	ScavTrap::attack;
	void	whoAmI( void ) const;
};
#endif

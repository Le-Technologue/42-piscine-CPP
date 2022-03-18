#include "ScavTrap.hpp"

/** Constructors * ********************************************************* */

ScavTrap::ScavTrap( void ) : ClapTrap("Scav", 100, 50, 20) {

	std::cout << "ScavTrap [" << this->_name << "] constructed" << std::endl;
};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	std::cout << "ScavTrap [" << this->_name << "] constructed" << std::endl;
};

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src) {

	std::cout << "ScavTrap [" << this->_name << "] copy constructed" <<
	std::endl;
};

/** Destructor * *********************************************************** */

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap [" << this->_name << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	ClapTrap::operator=(rhs);
	return *this;
}

/** Functions * ************************************************************* */

void	ScavTrap::attack( const std::string & target ) {

	if (!this->_hp)
	{
		std::cout <<
		"ScavTrap [" <<
		this->_name << "] has expired, remember ? Thus it can't attack." <<
		std::endl;
	}
	else if (!this->_energy)
	{
		std::cout <<
		"ScavTrap [" << this->_name << "] hasn't enough energy to attack" <<
		std::endl;
	}
	else
	{
		std::cout << "ScavTrap [" << this->_name << "] attacks [" << target <<
		"] inflicting it " << this->_damage << " hits" <<
		std::endl;
		this->_energy--;
	}
};

void	ScavTrap::guardGate( void ) {

	if (!this->_hp)
	{
		std::cout << "ScavTrap [" << this->_name <<
		"] carcass is now a doorstop, " <<
		"because he can't gatekeep more than that in its state" <<
		std::endl;
	}
	else
	{
		std::cout << "ScavTrap [" << this->_name <<
		"] is now gatekeeping for some reason" <<
		std::endl;
	}
};

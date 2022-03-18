#include "DiamondTrap.hpp"

/** Constructors * ********************************************************* */

DiamondTrap::DiamondTrap( void ) :

	ClapTrap("Diamond_clap_name", 100, 100, 30),
	_name("Diamond") {

	std::cout << "DiamondTrap [" << this->_name << "] constructed" << std::endl;
};

DiamondTrap::DiamondTrap( std::string name ) :

	ClapTrap(name + "_clap_name", 100, 100, 30),
	_name(name) {

	std::cout << "DiamondTrap [" << this->_name << "] constructed" << std::endl;
};

DiamondTrap::DiamondTrap( DiamondTrap const & src ) :

	ClapTrap(src),
	ScavTrap(src),
	FragTrap(src),
	_name(src._name) {

	std::cout << "DiamondTrap [" << this->_name << "] copy constructed" <<
	std::endl;
};

/** Destructor * *********************************************************** */

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap [" << this->_name << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ) {

	this->_name = rhs._name;
	ClapTrap::operator=(rhs);
	return *this;
}

/** Functions * ************************************************************* */

void	DiamondTrap::whoAmI( void ) const {

	std::cout << "DiamondTrap [" << this->_name << "] \"Clap name\" is : \"" <<
	ClapTrap::_name << "\" whatever the heck that means." << std::endl;
};

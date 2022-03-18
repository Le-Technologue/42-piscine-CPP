#include "FragTrap.hpp"

/** Constructors * ********************************************************* */

FragTrap::FragTrap( void ) : ClapTrap("Frag", 100, 100, 30) {

	std::cout << "FragTrap [" << this->_name << "] constructed" << std::endl;
};

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {

	std::cout << "FragTrap [" << this->_name << "] constructed" << std::endl;
};

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src) {

	std::cout << "FragTrap [" << this->_name << "] copy constructed" <<
	std::endl;
};

/** Destructor * *********************************************************** */

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap [" << this->_name << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {

	ClapTrap::operator=(rhs);
	return *this;
}

/** Functions * ************************************************************* */

void	FragTrap::highFivesGuys( void ) {

	if (!this->_hp)
		std::cout << "Hi-five Ghost !" << std::endl;
	else
		std::cout << "Hi-five Guys !" << std::endl;
};

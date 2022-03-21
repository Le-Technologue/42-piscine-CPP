#include "Dog.hpp"

/** Constructors * ********************************************************* */

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "Dog [" << this->_type << "] constructed" << std::endl;
};

Dog::Dog( Dog const & src ) : Animal(src) {

	std::cout << "Dog [" << this->_type << "] copy constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Dog::~Dog( void ) {

	std::cout << "Dog [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Dog &	Dog::operator=( Dog const & rhs ) {

	Animal::operator=(rhs);
	return *this;
}

/** Functions * ************************************************************* */

void	Dog::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : RUFF !" << std::endl;
};

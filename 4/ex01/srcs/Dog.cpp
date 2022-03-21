#include "Dog.hpp"

/** Constructors * ********************************************************* */

Dog::Dog( void ) : Animal("Dog") {

	this->_brain = new Brain();
	std::cout << "Dog [" << this->_type << "] constructed" << std::endl;
};

Dog::Dog( Dog const & src ) : Animal(src) {

	this->_brain = new Brain(*src._brain);
	std::cout << "Dog [" << this->_type << "] copy constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Dog::~Dog( void ) {

	delete this->_brain;
	std::cout << "Dog [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Dog &	Dog::operator=( Dog const & rhs ) {

	*this->_brain = *rhs._brain;
	Animal::operator=(rhs);
	return *this;
}

/** Accessors * ************************************************************* */

Brain &	Dog::getBrain( void ) const {

	return *this->_brain;
};

/** Functions * ************************************************************* */

void	Dog::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : RUFF !" << std::endl;
};

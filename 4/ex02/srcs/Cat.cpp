#include "Cat.hpp"

/** Constructors * ********************************************************* */

Cat::Cat( void ) : Animal("Cat") {

	this->_brain = new Brain();
	std::cout << "Cat [" << this->_type << "] constructed" << std::endl;
};

Cat::Cat( Cat const & src ) : Animal(src) {

	this->_brain = new Brain(*src._brain);
	std::cout << "Cat [" << this->_type << "] copy constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Cat::~Cat( void ) {

	delete this->_brain;
	std::cout << "Cat [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Cat &	Cat::operator=( Cat const & rhs ) {

	*this->_brain = *rhs._brain;
	Animal::operator=(rhs);
	return *this;
}

/** Accessors * ************************************************************* */

Brain &	Cat::getBrain( void ) const {

	return *this->_brain;
};

/** Functions * ************************************************************* */

void	Cat::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : MEOW !" << std::endl;
};

#include "Cat.hpp"

/** Constructors * ********************************************************* */

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Cat [" << this->_type << "] constructed" << std::endl;
};

Cat::Cat( Cat const & src ) : Animal(src) {

	std::cout << "Cat [" << this->_type << "] copy constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Cat::~Cat( void ) {

	std::cout << "Cat [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Cat &	Cat::operator=( Cat const & rhs ) {

	Animal::operator=(rhs);
	return *this;
}

/** Functions * ************************************************************* */

void	Cat::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : MEOW !" << std::endl;
};

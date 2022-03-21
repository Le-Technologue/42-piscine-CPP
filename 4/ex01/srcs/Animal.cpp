#include "Animal.hpp"

/** Constructors * ********************************************************* */

Animal::Animal( void ) :

	_type("Whatever") {

	std::cout << "Animal [" << this->_type << "] constructed" << std::endl;
};

Animal::Animal( Animal const & src ) :

	_type(src._type) {

	std::cout << "Animal [" << this->_type << "] copy constructed" << std::endl;
};

Animal::Animal( std::string type ) :

	_type(type) {

	std::cout << "Animal [" << this->_type << "] constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Animal::~Animal( void ) {

	std::cout << "Animal [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Animal &	Animal::operator=( Animal const & rhs ) {

	this->_type = rhs._type;
	return *this;
}

/** Accessors * ************************************************************* */

std::string	Animal::getType( void ) const {

	return (this->_type);
}

/** Functions * ************************************************************* */

void	Animal::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : WHAT ?" << std::endl;
};

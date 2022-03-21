#include "WrongAnimal.hpp"

/** Constructors * ********************************************************* */

WrongAnimal::WrongAnimal( void ) :

	_type("Whatever") {

	std::cout << "WrongAnimal [" << this->_type << "] constructed" << std::endl;
};

WrongAnimal::WrongAnimal( WrongAnimal const & src ) :

	_type(src._type) {

	std::cout << "WrongAnimal [" << this->_type << "] copy constructed" <<
	std::endl;
};

WrongAnimal::WrongAnimal( std::string type ) :

	_type(type) {

	std::cout << "WrongAnimal [" << this->_type << "] constructed" << std::endl;
};

/** Destructor * *********************************************************** */

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	this->_type = rhs._type;
	return *this;
}

/** Accessors * ************************************************************* */

std::string	WrongAnimal::getType( void ) const {

	return (this->_type);
}

/** Functions * ************************************************************* */

void	WrongAnimal::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : WHAT ?" << std::endl;
};

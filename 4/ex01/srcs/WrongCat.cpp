#include "WrongCat.hpp"

/** Constructors * ********************************************************* */

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << "WrongCat [" << this->_type << "] constructed" << std::endl;
};

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src) {

	std::cout << "WrongCat [" << this->_type << "] copy constructed" <<
	std::endl;
};

/** Destructor * *********************************************************** */

WrongCat::~WrongCat( void ) {

	delete this->_brain;
	std::cout << "WrongCat [" << this->_type << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	*this->_brain = *rhs._brain;
	WrongAnimal::operator=(rhs);
	return *this;
}

/** Accessors * ************************************************************* */

Brain &	Cat::getBrain( void ) const {

	return *this->_brain;
};

/** Functions * ************************************************************* */

void	WrongCat::makeSound( void ) const {

	std::cout << "The [" << this->_type << "] says : MEOW !" << std::endl;
};

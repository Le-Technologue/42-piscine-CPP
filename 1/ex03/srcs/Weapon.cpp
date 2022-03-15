#include "Weapon.hpp"

Weapon::Weapon( std::string init_type ) : _type(init_type) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

std::string const & Weapon::getType( void ) const {
	return (this->_type);
}

void		Weapon::setType( std::string new_type ) {
	this->_type = new_type;
	return ;
}

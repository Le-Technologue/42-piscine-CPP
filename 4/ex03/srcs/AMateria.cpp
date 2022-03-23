#include "AMateria.hpp"

AMateria::AMateria() : _type("unknown materia") {
	return ;
}

AMateria::AMateria(AMateria const & src) : _type(src._type) {
	return ;
}

AMateria::~AMateria() {
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {

	this->_type = rhs._type;
	return *this;
}

std::string const &	AMateria::getType() const {

	return this->_type;
}

void	AMateria::use(ICharacter& target) {

	std::cout << "* affects " << target.getName() << " *" << std::endl;
}

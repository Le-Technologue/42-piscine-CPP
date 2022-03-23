#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	return ;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	return ;
}

Cure::~Cure() {
	return ;
}

Cure &	Cure::operator=(Cure const & rhs) {

	AMateria::operator=(rhs);
	return *this;
}

AMateria*	Cure::clone( void ) const {

	return new Cure();
}

void	Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

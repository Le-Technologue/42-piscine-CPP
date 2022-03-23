#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	return ;
}

Ice::Ice(Ice const & src) : AMateria(src) {
	return ;
}

Ice::~Ice() {
	return ;
}

Ice &	Ice::operator=(Ice const & rhs) {

	AMateria::operator=(rhs);
	return *this;
}

AMateria*	Ice::clone( void ) const {

	return new Ice();
}

void	Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
	std::endl;
}

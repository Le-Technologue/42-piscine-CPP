#include "Brain.hpp"

/** Constructors * ********************************************************* */

Brain::Brain( void ) {

	std::cout << "Brain constructed" << std::endl;
};

Brain::Brain( Brain const& src ) {

	// Implementation done at the assignment operator ( = )
	*this = src;
	std::cout << "Brain copy constructed" << std::endl;
};

/** Destructor * *********************************************************** */

Brain::~Brain( void ) {

	std::cout << "Brain destructed" << std::endl;
};

/** Assignment * *********************************************************** */

Brain &	Brain::operator=( Brain const& rhs ) {

	if (this != &rhs)
		for ( int i = 0; i < IDEAS_QTY; i++ )
			this->_ideas[i] = rhs._ideas[i];
	return *this;
};

void	Brain::setIdea( size_t index, std::string idea ) {

	// This modulo cheap trick is an efficient,
	// yet lazy/lame, way to protect memory
	// as it is prone to unclear behaviors on the user side.
	// But then again, this is a lame exercice.

	this->_ideas[ index % IDEAS_QTY ] = idea;
};

/** Accessors * ************************************************************* */

std::string	Brain::getIdea( size_t index ) const {

	// More of the above cheap trick

	return this->_ideas[ index % IDEAS_QTY ];
};

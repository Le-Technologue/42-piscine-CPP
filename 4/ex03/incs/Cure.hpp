#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure( void );
	Cure( Cure const & copy );
	virtual ~Cure( void );

	virtual Cure& operator=( Cure const & rhs );

	virtual AMateria*	clone( void ) const;
	virtual void		use( ICharacter& target );
};
#endif

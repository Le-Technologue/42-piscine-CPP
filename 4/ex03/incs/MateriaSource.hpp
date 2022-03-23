#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:

	AMateria*	_storage[4];

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & copy );
	virtual ~MateriaSource( void );

	virtual MateriaSource&	operator=( MateriaSource const & rhs );

	virtual void		learnMateria( AMateria* m );
	virtual AMateria*	createMateria( std::string const & type );
};
#endif

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		this->_storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	for (int i = 0; i < 4; i++)
	{
		if (src._storage[i])
			this->_storage[i] = src._storage[i]->clone();
		else
			this->_storage[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		delete this->_storage[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {

	for (int i = 0; i < 4; i++)
		delete this->_storage[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs._storage[i])
			this->_storage[i] = rhs._storage[i]->clone();
		else
			this->_storage[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia) {

	for (int i = 0; i < 4; i++)
	{
		if (!this->_storage[i])
		{
			this->_storage[i] = materia;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++)
		if (this->_storage[i] && this->_storage[i]->getType() == type)
			return this->_storage[i]->clone();
	return NULL;
}

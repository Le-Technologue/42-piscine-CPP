#include "Character.hpp"

Character::Character() : _name("unnamed") {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & src) : _name(src._name) {

	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character &	Character::operator=(Character const & rhs) {

	/* this->_name = rhs._name; */
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return *this;
}

std::string const &	Character::getName() const {

	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx >= 4)
		return ;
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}

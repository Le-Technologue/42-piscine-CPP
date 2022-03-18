#include "ClapTrap.hpp"

/** Constructors * ********************************************************* */

ClapTrap::ClapTrap( void ) :

	_name("Unnamed"),
	_hp(10),
	_energy(10),
	_damage(0) {

	std::cout << "ClapTrap [" << this->_name << "] constructed" << std::endl;
};

ClapTrap::ClapTrap( std::string name ) :

	_name(name),
	_hp(10),
	_energy(10),
	_damage(0) {

	std::cout << "ClapTrap [" << this->_name << "] constructed" << std::endl;
};

ClapTrap::ClapTrap( ClapTrap const & src ) {

	*this = src;
	std::cout << "ClapTrap [" << this->_name << "] copy constructed" <<
	std::endl;
};

/** Destructor * *********************************************************** */

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap [" << this->_name << "] destructed" << std::endl;
};

/** Assignment * *********************************************************** */

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return *this;
};

/** Functions * ************************************************************* */

void	ClapTrap::attack( const std::string & target ) {

	if (!this->_hp)
	{
		std::cout <<
		"ClapTrap [" <<
		this->_name << "] has expired, remember ? Thus it can't attack." <<
		std::endl;
	}
	else if (!this->_energy)
	{
		std::cout <<
		"ClapTrap [" << this->_name << "] hasn't enough energy to attack" <<
		std::endl;
	}
	else
	{
		std::cout << "ClapTrap [" << this->_name << "] attacks [" << target <<
		"] inflicting it " << this->_damage << " hits" <<
		std::endl;
		this->_energy--;
	}
};

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hp > amount)
	{
		this->_hp -= amount;
		std::cout << "ClapTrap [" << this->_name << "] suffers " <<
		amount << " hits" << std::endl;
	}
	else
	{
		if (!this->_hp)
		{
			std::cout <<
			"ClapTrap [" << this->_name <<
			"] has already expired, way to beat a dead " << this->_name <<
			std::endl;
			return ;
		}
		this->_hp = 0;
		std::cout << "ClapTrap [" << this->_name << "] has fallen" << std::endl;
	}
};

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (!this->_hp)
	{
		std::cout <<
		"ClapTrap [" << this->_name << "] is beyond repairs " <<
		std::endl;
	}
	else if (!this->_energy)
	{
		std::cout <<
		"ClapTrap [" << this->_name << "] hasn't enough energy for repairs" <<
		std::endl;
	}
	else
	{
		std::cout << "ClapTrap [" << this->_name << "] recovers " <<
		amount << " hit points" << std::endl;
		this->_energy--;
	}
};

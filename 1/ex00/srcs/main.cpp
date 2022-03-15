#include "Zombie.hpp"

int main( void )
{
	Zombie	*zombie;

	zombie = newZombie("Tas");
	zombie->announce();
	randomChump("Pile");
	delete zombie;
	return 0;
}

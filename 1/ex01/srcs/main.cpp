#include <cstdlib>
#include "Zombie.hpp"

int main( int ac, char *av[] )
{
	Zombie	*horde;
	size_t	amount;

	if (ac != 3)
	{
		std::cout << "USAGE: ./test [amount of zombies] [name]" << std::endl;
		return 0;
	}
	amount = strtoul(av[1], NULL, 10);

	if (amount == 0 || amount > 200)
	{
		std::cout << "C'mon, with the funky values." << std::endl;
		std::cout << "This is a lame exercice to learn the syntax of array allocation in C++, not the OS of a nuclear reactor." << std::endl;
		return 0;
	}

	horde = zombieHorde(amount, av[2]);
	for (size_t i = 0; i < amount; i++)
		horde[i].announce();

	delete [] horde;
	return 0;
}

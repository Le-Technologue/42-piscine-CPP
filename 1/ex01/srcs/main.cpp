#include "Zombie.hpp"
#include <iostream>
#include <sstream>

int main( int ac, char *av[] )
{
	Zombie				*horde;
	std::string			amount_str;
	int					amount_nbr;

	if ( ac != 3 || !av[1] )
	{
		std::cout << "USAGE: ./test [amount of zombies] [name]" << std::endl;
		return 0;
	}

	amount_str = av[1];
	std::stringstream	amount_ss(amount_str);
	amount_ss >> amount_nbr;

	if (amount_nbr <= 0 || amount_nbr > 200)
	{
		std::cout << "C'mon, with the funky values." << std::endl;
		std::cout << "This is a lame exercice to learn the syntax of array allocation in C++, not the OS of a nuclear reactor." << std::endl;
		return 0;
	}

	horde = zombieHorde(amount_nbr, av[2]);
	for (int i = 0; i < amount_nbr; i++)
		horde[i].announce();

	delete [] horde;
	return 0;
}

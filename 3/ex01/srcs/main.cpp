#include "ScavTrap.hpp"

int main(void) {

	std::cout << "\nScavTrap fly(\"A fly\");" << std::endl;
	ScavTrap fly("fly");
	std::cout << "\nScavTrap cow(\"cow\");" << std::endl;
	ScavTrap cow("cow");

	std::cout << std::endl;

/* ***************  HP DEPLETION TEST  ************************************** */
	std::cout << "[ HP DEPLETION TEST ]" << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\nfly.guardGate();" << std::endl;
		fly.guardGate();

		std::cout << "\nfly.attack(\"an electric fence\");" << std::endl;
		fly.attack("an electric fence");

		std::cout << "\nfly.takeDamage(100);" << std::endl;
		fly.takeDamage(100);

		std::cout << "\ncow.attack(\"an electric fence\");" << std::endl;
		cow.attack("an electric fence");

		std::cout << "\ncow.takeDamage(2);" << std::endl;
		cow.takeDamage(2);
	}
	std::cout << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;

/* ***************  HP RESTORATION TEST  ************************************ */
	std::cout << "[ HP RESTORATION TEST ]" << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

	std::cout << "\ncow.attack(\"grass\");" << std::endl;
	cow.attack("grass");

	std::cout << "\ncow.beRepaired(10);" << std::endl;
	cow.beRepaired(10);

	std::cout << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;

/* ***************  ENERGY DEPLETION TEST  ********************************** */
	std::cout << "[ ENERGY DEPLETION TEST ]" << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	for (int i = 0; i < 24; i++)
	{
		std::cout << "\ncow.attack(\"grass\");" << std::endl;
		cow.attack("grass");

		std::cout << "cow.beRepaired(10);" << std::endl;
		cow.beRepaired(10);
	}
	std::cout << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;

	return 0;
}

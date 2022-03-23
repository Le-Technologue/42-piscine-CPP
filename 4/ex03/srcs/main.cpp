#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void) {

	std::cout << "--- subject tests ---" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "--- other tests ---" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* my_butt = new Character("my butt");
		ICharacter* another_character = new Character("another character");

		std::cout << "\"AMateria* tmp;\"" << std::endl;
		AMateria* tmp;
		std::cout << "---------------------" << std::endl;

		std::cout << "\"tmp = src->createMateria(\"ice\");\"" << std::endl;
		tmp = src->createMateria("ice");
		std::cout << "---------------------" << std::endl;

		std::cout << "\"my_butt->equip(tmp);\"" << std::endl;
		my_butt->equip(tmp);
		std::cout << "---------------------" << std::endl;
	
		std::cout << "\"my_butt->use(0, *another_character);\"" << std::endl;
		my_butt->use(0, *another_character);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"*another_character = *my_butt;\"" << std::endl;
		*another_character = *my_butt;
		std::cout << "---------------------" << std::endl;

		std::cout << "\"tmp = src->createMateria(\"cure\");\"" << std::endl;
		tmp = src->createMateria("cure");
		std::cout << "---------------------" << std::endl;

		std::cout << "\"another_character->equip(tmp);\"" << std::endl;
		another_character->equip(tmp);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"my_butt->use(0, *another_character);\"" << std::endl;
		my_butt->use(0, *another_character);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"another_character->use(0, *my_butt);\"" << std::endl;
		another_character->use(0, *my_butt);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"my_butt->use(2, *another_character);\"" << std::endl;
		my_butt->use(2, *another_character);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"my_butt->use(5, *another_character);\"" << std::endl;
		my_butt->use(5, *another_character);
		std::cout << "---------------------" << std::endl;

		std::cout << "\"delete my_butt;\"" << std::endl;
		delete my_butt;
		std::cout << "---------------------" << std::endl;

		std::cout << "\"delete another_character;\"" << std::endl;
		delete another_character;
		std::cout << "---------------------" << std::endl;

		std::cout << "\"delete src;\"" << std::endl;
		delete src;
		std::cout << "---------------------" << std::endl;
	}	

	return 0;
}

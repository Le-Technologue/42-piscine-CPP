#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	// Animal's tests
	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" <<
	"> Animal class and its derivations" << std::endl;

	// Initialisations
	std::cout << "\nconst Animal* whatever = new Animal();" << std::endl;
	const Animal* whatever = new Animal();

	std::cout << "\nconst Animal* snoop = new Dog();" << std::endl;
	const Animal* snoop = new Dog();

	std::cout << "\nconst Animal* doja = new Cat();" << std::endl;
	const Animal* doja = new Cat();

	std::cout << std::endl;

	std::cout << "\n// Sound tests" << std::endl;
	// Sound tests
	std::cout << "Whatever is a " << whatever->getType() << std::endl;
	std::cout << "Whatever " ;
	whatever->makeSound();

	std::cout << std::endl;

	std::cout << "Snoop is a " << snoop->getType() << std::endl;
	std::cout << "Snoop " ;
	snoop->makeSound();

	std::cout << std::endl;

	std::cout << "Doja is a " << doja->getType() << std::endl;
	std::cout << "Doja " ;
	doja->makeSound();

	// WrongAnimal's tests
	std::cout << "\n\n[ ~~~~~ MORE TESTS ~~~~~ ]\n" <<
	"> WrongAnimal class and its derivations" << std::endl;

	// Initialisations
	std::cout << "\nconst WrongAnimal* whatever_wrg = new WrongAnimal();" <<
	std::endl;
	const WrongAnimal* whatever_wrg = new WrongAnimal();

	std::cout << "\nconst WrongAnimal* doja_wrg = new WrongCat();" << std::endl;
	const WrongAnimal* doja_wrg = new WrongCat();

	std::cout << "\n// Sound tests" << std::endl;
	// Sound tests
	std::cout << "Whatever_wrg is a " << whatever_wrg->getType() << std::endl;
	std::cout << "Whatever_wrg " ;
	whatever_wrg->makeSound();

	std::cout << std::endl;

	std::cout << "Doja_wrg is a " << doja_wrg->getType() << std::endl;
	std::cout << "Doja_wrg " ;
	doja_wrg->makeSound();

	std::cout << std::endl;

	std::cout << "\n// Destruction tests" << std::endl;
	// Destruction tests
	std::cout << "\ndelete whatever;" << std::endl;
	delete whatever;
	std::cout << "\ndelete whatever_wrg;" << std::endl;
	delete whatever_wrg;

	std::cout << "\ndelete doja;" << std::endl;
	delete doja;
	std::cout << "\ndelete doja_wrg;" << std::endl;
	delete doja_wrg;

	std::cout << "\ndelete snoop;" << std::endl;
	delete snoop;
}

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALS_QTY 4

int	main( void ) {

	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]" << std::endl;

	// Animal	test // <-- would result in a compilation error

	std::cout << "\nconst Animal* j = new Dog();" << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;

	std::cout << "\nconst Animal* i = new Cat();" << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "\ndelete j;" << std::endl;
	delete j;
	std::cout << std::endl;

	std::cout << "\ndelete i;" << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << "\n[ ~~~~~ MANDATED TESTS ~~~~~ ]\n" << std::endl;

	Animal	*animals[ANIMALS_QTY];

	std::cout << "--- init array ---" << std::endl;

	for (int i = 0; i < ANIMALS_QTY; i++) {
		if (i < ANIMALS_QTY / 2)
		{
			std::cout << "\nanimals[i] = new Cat();" << std::endl;
			animals[i] = new Cat();
		}
		else
		{
			std::cout << "\nanimals[i] = new Dog();" << std::endl;
			animals[i] = new Dog();
		}
		std::cout << std::endl;
	}

	std::cout << std::endl << "--- array test ---" << std::endl;

	for (int i = 0; i < ANIMALS_QTY; i++) {
		std::cout << "\nanimals[i]->makeSound();" << std::endl;
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl <<  "--- delete array ---" << std::endl;

	for (int i = 0; i < ANIMALS_QTY; i++) {
		std::cout << "\ndelete animals[i];" << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << "\n[ ~~~~~ MORE TESTS ~~~~~ ]\n" << std::endl;

	std::cout << "--- Let us init a cat on the heap... ---" << std::endl;
	std::cout << std::endl;

	std::cout << "Cat *cat = new Cat();" << std::endl;
	Cat		*cat = new Cat();
	std::cout << std::endl;

	std::cout << "Brain &cat_brain = cat.getBrain();" << std::endl;
	Brain	&cat_brain = cat->getBrain();

	std::cout <<
	"cat->setIdea(0, \"Why is that human still crashing in my home ?\");" <<
	std::endl;
	cat_brain.setIdea(0, "Why is that human still crashing in my home ?");

	std::cout << "cat_brain->setIdea(1, \"Ah yes, he provides me food !\");" <<
	std::endl;
	cat_brain.setIdea(1, "Ah yes, he provides me food !");


	std::cout << std::endl << "--- ...copy that cat... ---" << std::endl;
	std::cout << std::endl;

	std::cout << "Cat *copycat = new Cat();" << std::endl;
	Cat		*copycat = new Cat(*cat);
	std::cout << "Brain &copycat_brain = copycat.getBrain();" << std::endl;
	Brain	&copycat_brain = copycat->getBrain();
	std::cout << std::endl;


	std::cout << "--- ...and change an idea in that copycat's brain... ---" <<
	std::endl;
	std::cout << std::endl;
	std::cout << "copycat_brain->setIdea(1, \"Ah yes, he scratches my belly !\");" << std::endl;
	copycat_brain.setIdea(1, "Ah yes, he scratches my belly !");


	std::cout << "\n--- Now let's pick cat's brain... ---" << std::endl;
	std::cout << "\nstd::cout << cat_brain.getIdea(i);" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 2 ; i++)
	{
		std::cout << cat_brain.getIdea(i);
		std::cout << std::endl;
	}

	std::cout << "\n--- ...and then copycat's ! ---" << std::endl;
	std::cout << "\nstd::cout << copycat_brain.getIdea(i);" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 2 ; i++)
	{
		std::cout << copycat_brain.getIdea(i);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}

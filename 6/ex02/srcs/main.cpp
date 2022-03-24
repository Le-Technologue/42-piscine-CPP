#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate( void );
void	identify( Base *p );
void	identify( Base& p );

int main(void) {

	std::cout << "\"Base *base = generate();\"" << std::endl;
	std::cout << "v" << std::endl;
	Base *base = generate();
	std::cout << std::endl;

	std::cout << "\"identify(base);\"" << std::endl;
	std::cout << "v" << std::endl;
	identify(base);
	std::cout << std::endl;

	std::cout << "\"identify(*base);\"" << std::endl;
	std::cout << "v" << std::endl;
	identify(*base);
	std::cout << std::endl;

	delete base;
}

Base	*generate( void ) {

	int		random_num;
	Base	*base;
	srand(time(NULL));

	random_num = rand() % 3;

	if (random_num == 0) {
		base = new C();
		std::cout << "instantiated C" << std::endl;
	}
	else if (random_num == 1) {
		base = new A();
		std::cout << "instantiated A" << std::endl;
	}
	else {
		base = new B();
		std::cout << "instantiated B" << std::endl;
	}
	return (base);
}

void	identify( Base *p ) {

	void	*test;

	test = dynamic_cast<A*>(p);
	if (test) {
		std::cout << "is indeed A" << std::endl;
		return;
	}

	test = dynamic_cast<B*>(p);
	if (test) {
		std::cout << "is indeed B" << std::endl;
		return;
	}

	test = dynamic_cast<C*>(p);
	if (test) {
		std::cout << "is indeed C" << std::endl;
		return;
	}
}

void	identify( Base& p ) {

	try
	{
		A& test = dynamic_cast<A&>(p);
		std::cout << "is still A" << std::endl;
		(void)test;
	}
	catch (std::bad_cast &bc)
	{
		(void)bc;
		try
		{
			B& test = dynamic_cast<B&>(p);
			std::cout << "is still B" << std::endl;
			(void)test;
		}
		catch (std::bad_cast &bc)
		{
			std::cout << "is still C" << std::endl;
			(void)bc;
		}
	}
}

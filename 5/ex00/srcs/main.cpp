#include <iostream>

#include "Bureaucrat.hpp"

int		main( void ) {

	std::cout << "--- Initializing two bureaucrats ---" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "\"Bureaucrat	peter(\"Peter\", 2);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	peter( "Peter", 2 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat	stakhanov(\"Stakhanov\", 149);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	stakhanov( "Stakhanov", 149 );
	std::cout << std::endl;

	std::cout << "--- Presenting two bureaucrats ---" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	std::cout << peter << " is a complacent idiot with a rich dad." <<
	std::endl;
	std::cout << stakhanov <<
	" is a proficient worker that might overshadow its bosses. " << std::endl;
	std::cout << std::endl;

	std::cout << "--- Initiating Peter's principle loop ---" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\"for (int i = 0 ; i < 1000 ; i++)\"" << std::endl;
	std::cout << "v" << std::endl;
	std::cout << std::endl;
	for (int i = 0 ; i < 1000 ; i++)
	{
		std::cout << "\"try {\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << std::endl;
		try {
			std::cout << "\"stakhanov.demote();\"" << std::endl;
			std::cout << "v" << std::endl;
			stakhanov.demote();
			std::cout << std::endl;

			std::cout << "\"peter.promote();\"" << std::endl;
			std::cout << "v" << std::endl;
			peter.promote();
			std::cout << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << std::endl;
			std::cout << "\"catch ( std::exception & e ) {\"" << std::endl;
			std::cout << "v" << std::endl;
			std::cout << "Exception caught: " << e.what() << std::endl;
			std::cout << std::endl;

			std::cout << "\"break ;\"" << std::endl;
			std::cout << std::endl;
			break ;
		}
	}

	try {
	std::cout << "\"peter.promote();\"" << std::endl;
	std::cout << "v" << std::endl;
	peter.promote();
	std::cout << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << std::endl;
		std::cout << "\"catch ( std::exception & e ) {\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << "Exception caught: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;

	return 0;
}

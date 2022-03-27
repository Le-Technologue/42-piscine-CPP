#include <iostream>
#include <vector>

#include "easyfind.hpp"

int		main( void )
{
	std::cout << "[ ~~~~~ INITIALIZING VECTOR ~~~~~ ]\n" << std::endl;
	std::cout << "\"std::vector<int>			vct;\"" << std::endl;
	std::cout << "v" << std::endl;

	std::vector<int>			vct;

	std::cout << std::endl;

	std::cout << "\"std::vector<int>::iterator	it;\"" << std::endl;
	std::cout << "v" << std::endl;

	std::vector<int>::iterator	it;

	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[ ~~~~ filling vector with powers of 2 ~~~~ ]\n" << std::endl;
	std::cout << "\"for ( int i = 0; i < 8; i++ )\"" << std::endl;
	std::cout << "v" << std::endl;

	for ( int i = 0; i < 8; i++ )
	{
		std::cout << "\"vct.push_back( 1 << i );\"" << std::endl;
		std::cout << "v" << std::endl;

		vct.push_back( 1 << i );
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ DISPLAYING VECTOR ~~~~~ ]\n" << std::endl;

	for ( int i = 0; i < 8; i++ )
		std::cout << vct[i] << std::endl;

	std::cout << std::endl;
	std::cout << "[ ~~~~~ SEARCHING VECTOR ~~~~~ ]\n" << std::endl;
	std::cout << "[ ~~~~~ ...for even values... ~~~~~ ]\n" << std::endl;

	for ( int i = 0; i < 8; i++ )
	{
		it = easyfind( vct, 1 << i );
		std::cout << "( " << *it << " ) found at index [" <<
		it - vct.begin() << "]" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ ...for an odd value. ~~~~~ ]\n" << std::endl;
	std::cout << "\"try { easyfind( vct, 3 ); }\"" << std::endl;
	std::cout << "v" << std::endl;

	try { easyfind( vct, 3 ); }
	
	catch ( std::exception & e )
	{
		std::cout << "\"catch ( std::exception & e )\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << "You won't find odd numbers here !" << std::endl;
	}

	return 0;
}

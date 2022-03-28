#include "Array.hpp"

int		main( void ) {

	std::cout << "[ ~~~~~ CONSTRUCTING TWO ARRAYS ~~~~~ ]\n" << std::endl;
	std::cout << "\"Array<int>	empty;\"" << std::endl;
	Array<int>	empty;
	std::cout << std::endl;

	std::cout << "\"Array<int>	quad(4);\"" << std::endl;
	Array<int>	quad(4);
	std::cout << std::endl;

	std::cout << "[ ~~~~~ [] OPERATOR TESTS ~~~~~ ]\n" << std::endl;
	std::cout << "[ ~~~~~ initializing \"quad\" array ~~~~~ ]\n" << std::endl;

	std::cout << "\"for ( unsigned int i = 0 ; i < quad.size(); i++ )\"" << std::endl;
	std::cout << "v" << std::endl;
	for ( unsigned int i = 0 ; i < quad.size(); i++ )
	{
		std::cout << "\"quad[i] = i;\"" << std::endl;
		std::cout << "v" << std::endl;
		quad[i] = i;
	}

	std::cout << "\n[ ~~~~~ displaying \"quad\" array ~~~~~ ]\n" << std::endl;

	std::cout << "\"for ( unsigned int i = 0 ; i < quad.size(); i++ )\"" << std::endl;
	std::cout << "v" << std::endl;
	for ( unsigned int i = 0 ; i < quad.size(); i++ )
	{
		std::cout << "\"std::cout << quad[i] << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << quad[i] << std::endl;
	}

	std::cout << "\n[ ~~~~~ OUT OF RANGE EXCEPTION ~~~~~ ]\n" << std::endl;
	std::cout << "\"try { std::cout << empty[0] << std::endl; }\"" << std::endl;
	std::cout << "v" << std::endl;
	try { std::cout << empty[0] << std::endl; }
	
	catch ( std::exception & e ) {
		std::cout << "\"catch ( std::exception & e ) {\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << e.what() << ". Do you want to segfault you crazy thing?\n";
		std::cout << std::endl;
	}

	std::cout << "\n[ ~~~~~ DEEP COPY BY ASSIGNMENT OPERATOR ~~~~~ ]\n" <<
	std::endl;
	std::cout << "\"empty = quad;\"" << std::endl;
	empty = quad;
	std::cout << std::endl;

	std::cout << "\n[ ~~~~~ PROVING DEEP COPY ~~~~~ ]\n" << std::endl;
	std::cout << "\"quad[0] = 666;\"" << std::endl;
	quad[0] = 666;
	std::cout << std::endl;

	std::cout << "\n[ ~~~~~ displaying (not) \"empty\" array ~~~~~ ]\n" <<
	std::endl;
	std::cout << "\"for ( unsigned int i = 0 ; i < empty.size(); i++ )\"" << std::endl;
	std::cout << "v" << std::endl;
	for ( unsigned int i = 0 ; i < empty.size(); i++ )
	{
		std::cout << "\"empty[i] = i;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << empty[i] << std::endl;
	}

	std::cout << "\n[ ~~~~~ displaying \"quad\" array ~~~~~ ]\n" << std::endl;
	std::cout << "\"for ( unsigned int i = 0 ; i < quad.size(); i++ )\"" << std::endl;
	std::cout << "v" << std::endl;
	for ( unsigned int i = 0 ; i < quad.size(); i++ )
	{
		std::cout << "\"quad[i] = i;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << quad[i] << std::endl;
	}

	std::cout << "\n[ ~~~~~ COPY CONSTRUCTION ~~~~~ ]\n" << std::endl;

	std::cout << "\"Array<int>	quad_copy(quad);\"" << std::endl;
	Array<int>	quad_copy(quad);

	std::cout << "\n[ ~~~~~ displaying \"quad_copy\" array ~~~~~ ]\n" <<
	std::endl;
	std::cout << "\"for ( unsigned int i = 0 ; i < quad_copy.size(); i++ )\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	for ( unsigned int i = 0 ; i < quad_copy.size(); i++ )
	{
		std::cout << "\"quad_copy[i] = i;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << quad_copy[i] << std::endl;
	}

	return 0;
}

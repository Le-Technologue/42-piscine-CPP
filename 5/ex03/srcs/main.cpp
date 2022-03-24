#include <iostream>

#include "Intern.hpp"

int		main( void ) {

	std::cout << "--- Initializing Interns ---" << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << "\"Intern april_ludgate();\"" << std::endl;
	std::cout << "v" << std::endl;
	Intern	april_ludgate;
	std::cout << std::endl;

	std::cout << "--- Making forms ---" << std::endl;
	std::cout << "--------------------" << std::endl;

	std::cout << "\"Form * scf;\"" << std::endl;
	std::cout << "v" << std::endl;
	Form *	scf;
	std::cout << std::endl;

	std::cout << "\"Form * rrf;\"" << std::endl;
	std::cout << "v" << std::endl;
	Form *	rrf;
	std::cout << std::endl;

	std::cout << "\"scf = april_ludgate.makeForm(\"shrubbery creation\", \"Pawnee_Indiana\");\"" << std::endl;
	std::cout << "v" << std::endl;
	scf = april_ludgate.makeForm("shrubbery creation", "Pawnee_Indiana");
	std::cout << std::endl;

	std::cout << "\"std::cout << *scf << std::endl;\"" << std::endl;
	std::cout << "v" << std::endl;
	std::cout << *scf << std::endl;
	std::cout << std::endl;

	std::cout << "\"rrf = april_ludgate.makeForm(\"raising intern's salaries\", \"April\");\"" << std::endl;
	std::cout << "v" << std::endl;
	rrf = april_ludgate.makeForm("raising intern's salaries", "April");
	std::cout << std::endl;

	( void )rrf;
	// TESTS FOR EMPTY STRINGS - no exception or segfault were spotted
	//
	/* std::cout << "\"rrf = april_ludgate.makeForm(\"\", \"\");\"" << std::endl; */
	/* std::cout << "v" << std::endl; */
	/* rrf = april_ludgate.makeForm("", ""); */
	/* std::cout << std::endl; */

	/* std::cout << "\"rrf = april_ludgate.makeForm(\"robotomy request\", \"\");\"" << std::endl; */
	/* std::cout << "v" << std::endl; */
	/* rrf = april_ludgate.makeForm("robotomy request", ""); */
	/* std::cout << std::endl; */

	/* std::cout << "\"delete rrf;\"" << std::endl; */
	/* std::cout << "v" << std::endl; */
	/* delete rrf; */
	/* std::cout << std::endl; */

	/* std::cout << "\"std::cout << *rrf << std::endl;\"" << std::endl; */
	/* std::cout << "v" << std::endl; */
	/* std::cout << *rrf << std::endl; */
	/* std::cout << std::endl; */

	/* std::cout << "\"delete rrf;\"" << std::endl; */
	/* std::cout << "v" << std::endl; */
	/* delete rrf; */
	/* std::cout << std::endl; */

	std::cout << "\"delete scf;\"" << std::endl;
	std::cout << "v" << std::endl;
	delete scf;
	std::cout << std::endl;

	return 0;
}

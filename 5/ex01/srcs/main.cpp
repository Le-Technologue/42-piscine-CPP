#include <iostream>

#include "Bureaucrat.hpp"

int		main( void ) {

	std::cout << "--- Initializing bureaucrats ---" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\"Bureaucrat	bernard(\"Bernard\", 1);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	bernard( "Bernard", 1 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat	peter(\"Peter\", 75);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	peter( "Peter", 75 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat	dilbert(\"Dilbert\", 77);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	dilbert( "Dilbert", 77 );
	std::cout << std::endl;

	std::cout << "--- Presenting bureaucrats ---" << std::endl;
	std::cout << "------------------------------" << std::endl;

	std::cout << bernard << " is a CEO." << std::endl;
	std::cout << peter << " is a middle manager." << std::endl;
	std::cout << dilbert << " is an engineer." << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing forms ---" << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout <<
	"\"Form	exploit_employees(\"regulate toilet breaks\", 75, 76);\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	Form	exploit_employees("regulate toilet breaks", 75, 76);
	std::cout << std::endl;

	std::cout <<
	"\"Form	embezzle_money(\"buying myself a private jet\", 1, 1);\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	Form	embezzle_money("buying myself a private jet", 1, 1);
	std::cout << std::endl;

	std::cout <<
	"\"Form	terminate_all(\"fire everyone\", 2, 75);\"" << std::endl;
	std::cout << "v" << std::endl;
	Form	terminate_all("fire everyone", 2, 75);
	std::cout << std::endl;

	std::cout << exploit_employees << std::endl;
	std::cout << embezzle_money << std::endl;
	std::cout << terminate_all << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing signatures ---" << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "\"peter.signForm(exploit_employees);\"" << std::endl;
	std::cout << "v" << std::endl;
	peter.signForm(exploit_employees);
	std::cout << std::endl;

	std::cout << "\"peter.signForm(embezzle_money);\"" << std::endl;
	std::cout << "v" << std::endl;
	peter.signForm(embezzle_money);
	std::cout << std::endl;

	std::cout << "\"bernard.signForm(embezzle_money);\"" << std::endl;
	std::cout << "v" << std::endl;
	bernard.signForm(embezzle_money);
	std::cout << std::endl;

	std::cout << "\"bernard.signForm(terminate_all);\"" << std::endl;
	std::cout << "v" << std::endl;
	bernard.signForm(terminate_all);
	std::cout << std::endl;

	std::cout << exploit_employees << std::endl;
	std::cout << embezzle_money << std::endl;
	std::cout << terminate_all << std::endl;
	std::cout << std::endl;

	return 0;
}

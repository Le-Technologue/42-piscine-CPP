#include <iostream>

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main( void ) {

	std::cout << "--- Initializing bureaucrats ---" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\"Bureaucrat bernard(\"Bernard\", 1);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	bernard( "Bernard", 1 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat benalla(\"Benalla\", 15);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	benalla( "Benalla", 15 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat peter(\"Peter\", 50);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	peter( "Peter", 50 );
	std::cout << std::endl;

	std::cout << "\"Bureaucrat dilbert(\"Dilbert\", 77);\"" << std::endl;
	std::cout << "v" << std::endl;
	Bureaucrat	dilbert( "Dilbert", 77 );
	std::cout << std::endl;

	std::cout << "--- Presenting bureaucrats ---" << std::endl;
	std::cout << "------------------------------" << std::endl;

	std::cout << bernard << " is a CEO." << std::endl;
	std::cout << benalla << " is the godfather's muscle." << std::endl;
	std::cout << peter << " is a middle manager." << std::endl;
	std::cout << dilbert << " is an engineer." << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing forms ---" << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout <<
	"\"ShrubberyCreationForm shrub_it_up(\"Corporate headquarters\");\""
	<< std::endl;
	std::cout << "v" << std::endl;
	ShrubberyCreationForm	shrub_it_up("Corporate headquarters");
	std::cout << std::endl;

	std::cout << "\"RobotomyRequestForm robotomize(\"Peter\");\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	RobotomyRequestForm robotomize_p("Peter");
	std::cout << std::endl;

	std::cout << "\"RobotomyRequestForm robotomize(\"Dilbert\");\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	RobotomyRequestForm robotomize_d("Dilbert");
	std::cout << std::endl;

	std::cout <<
	"\"PresidentialPardonForm no_justice(\"Benalla\");\"" << std::endl;
	std::cout << "v" << std::endl;
	PresidentialPardonForm no_justice("Benalla");
	std::cout << std::endl;

	std::cout << shrub_it_up << std::endl;
	std::cout << robotomize_d << std::endl;
	std::cout << robotomize_p << std::endl;
	std::cout << no_justice << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing signatures ---" << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "\"dilbert.signForm(shrub_it_up);\"" << std::endl;
	std::cout << "v" << std::endl;
	dilbert.signForm(shrub_it_up);
	std::cout << std::endl;

	std::cout << "\"dilbert.signForm(robotomize_p);\"" << std::endl;
	std::cout << "v" << std::endl;
	dilbert.signForm(robotomize_p);
	std::cout << std::endl;

	std::cout << "\"peter.signForm(robotomize_d);\"" << std::endl;
	std::cout << "v" << std::endl;
	peter.signForm(robotomize_d);
	std::cout << std::endl;

	std::cout << shrub_it_up << std::endl;
	std::cout << robotomize_p << std::endl;
	std::cout << robotomize_d << std::endl;
	std::cout << no_justice << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing execution ---" << std::endl;
	std::cout << "-------------------------" << std::endl;

	std::cout << "\"dilbert.executeForm(shrub_it_up);\"" << std::endl;
	std::cout << "v" << std::endl;
	dilbert.executeForm(shrub_it_up);
	std::cout << std::endl;

	std::cout << "\"peter.executeForm(robotomize_d);\"" << std::endl;
	std::cout << "v" << std::endl;
	peter.executeForm(robotomize_d);
	std::cout << std::endl;

	std::cout << "\"benalla.executeForm(robotomize_d);\"" << std::endl;
	std::cout << "v" << std::endl;
	benalla.executeForm(robotomize_d);
	std::cout << std::endl;

	std::cout << "\"benalla.executeForm(robotomize_d);\"" << std::endl;
	std::cout << "v" << std::endl;
	benalla.executeForm(robotomize_d);
	std::cout << std::endl;

	std::cout << "\"bernard.executeForm(no_justice);\"" << std::endl;
	std::cout << "v" << std::endl;
	bernard.executeForm(no_justice);
	std::cout << std::endl;

	std::cout << "\"benalla.signForm(no_justice);\"" << std::endl;
	std::cout << "v" << std::endl;
	benalla.signForm(no_justice);
	std::cout << std::endl;

	std::cout << "\"bernard.executeForm(no_justice);\"" << std::endl;
	std::cout << "v" << std::endl;
	bernard.executeForm(no_justice);
	std::cout << std::endl;

	return 0;
}

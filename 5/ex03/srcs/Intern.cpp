#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

Intern::Intern( void ) { }

// Since there are no attributes to copy,
// a copy constructor is as good as calling the default constructor
Intern::Intern( const Intern & src ) {

	( void )src;
};

Intern::~Intern( void ) { };

// Same here, we might as well blow in the wind
Intern &	Intern::operator=( const Intern & rhs ) {

	( void ) rhs;
	return *this;
}

Form *	Intern::fetchForm( const std::string sought, const std::string target ){

	static std::string	form_names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int					type = 0;
	Form *				newForm = NULL;

	while ( type < UNK && sought != form_names[type] )
		++type;
	switch ( type )
	{
		case SCF :
			newForm = new ShrubberyCreationForm( target );
			break ;
		case RRF :
			newForm = new RobotomyRequestForm( target );
			break ;
		case PPF :
			newForm = new PresidentialPardonForm( target );
			break ;
		default :
			throw Intern::FormTypeUnknown();
	}
	std::cout << "Intern creates a [" << form_names[type] << "] form" <<
	std::endl;
	return (newForm);
}

Form *	Intern::makeForm( const std::string name, const std::string target ) {

	Form *	newForm;

	try {
		newForm = Intern::fetchForm( name, target );
		return ( newForm );
	}
	catch ( std::exception& e ) {
		std::cout << "Form type [" << name << "] doesn't exists" << std::endl;
		return ( NULL );
	}
}

char const *	Intern::FormTypeUnknown::what( void ) const throw() {

	return "Form type unknown";
}

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Unnamed" ) {

	this->_grade = LOWEST_GRADE;
}

Bureaucrat::Bureaucrat( std::string const name, size_t grade ) :

	_name( name ) {

	if ( grade > LOWEST_GRADE )
		throw Bureaucrat::GradeTooLowException();
	else if ( grade < HIGHEST_GRADE )
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) :

	_name ( copy.getName() ) {

	*this = copy;
}

Bureaucrat::~Bureaucrat( void ) {
	return ;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const & rhs ) {

	this->_grade = rhs._grade;
	return *this;
}

std::string const	Bureaucrat::getName( void ) const {

	return this->_name;
}

size_t				Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

void				Bureaucrat::promote( void ) {

	std::cout << "Promoting [" << this->_name <<
	"] to " << (this->_grade - 1) << "..." <<
	std::endl;

	if ( this->_grade == HIGHEST_GRADE )
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;	
}

void				Bureaucrat::demote( void ) {

	std::cout << "Demoting [" << this->_name <<
	"] to " << (this->_grade + 1) << "..." <<
	std::endl;

	if ( this->_grade == LOWEST_GRADE )
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;	
}

void				Bureaucrat::signForm( Form & form ) {

	try {
		form = form.beSigned( *this );
		std::cout << this->_name << " signed form [" <<
		form.getName() << "]" << std::endl;
	}	
	catch ( std::exception& e ) {
		std::cout << this->_name << " can't sign [" <<
		form.getName() << "] as it is well above its pay grade" << std::endl;
	}
}

char const *	Bureaucrat::GradeTooHighException::what( void ) const throw() {

	return "Grade is too high";
}

char const *	Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return "Grade is too low";
}

std::ostream& operator<<( std::ostream& os, Bureaucrat const & br ) {

	os << br.getName() << ", bureaucrat grade " << br.getGrade();
	return os;
}

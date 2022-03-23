#include "Form.hpp"

// Default Constructor is private/supposed to be bypassed
Form::Form() :

	_grdToSign(LOWEST_GRADE),
	_grdToExec(LOWEST_GRADE),
	_signed(false) { }

Form::Form( std::string name, size_t toSign, size_t toExec ) :

	_name(name),
	_grdToSign(toSign),
	_grdToExec(toExec),
	_signed(false) {

	if ( this->_grdToExec > LOWEST_GRADE || this->_grdToSign > LOWEST_GRADE )
		throw Form::GradeTooLowException();
	else if
	( this->_grdToExec < HIGHEST_GRADE || this->_grdToSign < HIGHEST_GRADE )
		throw Form::GradeTooHighException();
}

Form::Form( Form const & src ) :

	_name(src._name),
	_grdToSign(src._grdToSign),
	_grdToExec(src._grdToExec),
	_signed(src._signed) { }


Form::~Form( void ) { }

Form&	Form::operator=( Form const & rhs ) {

	this->_signed = rhs._signed;
	return *this;
}

const std::string &	Form::getName() const {

    return this->_name;
}

size_t				Form::getGToExec( void ) const {

	return this->_grdToExec;
}

size_t				Form::getGToSign( void ) const {

	return this->_grdToSign;
}

bool				Form::getSignature( void ) const {

	return this->_signed;
}

Form &				Form::beSigned( Bureaucrat signatory ) {

	if ( signatory.getGrade() > this->_grdToSign ) {
		throw Form::GradeTooLowException();
	}
	else {
		this->_signed = true;
		return *this;
	}
}

char const *	Form::GradeTooHighException::what( void ) const throw() {

	return "Grade is too high";
}

char const *	Form::GradeTooLowException::what( void ) const throw() {

	return "Grade is too low";
}

std::ostream&	operator<<( std::ostream& os, Form const & form ) {

	os << "Form [" << form.getName() << "] / grade to sign : (" <<
	form.getGToSign() << ") / grade to exec : (" <<
	form.getGToExec() << ") / " <<
	(form.getSignature() ? "signed" : "not signed ");
	return os;
}

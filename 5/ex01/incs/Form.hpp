#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {

private :

	const std::string	_name;
	const size_t		_grdToSign;
	const size_t		_grdToExec;
	bool				_signed;

	Form( void );

public :

	Form( const std::string name, size_t toSign, size_t toExec );
	Form( Form const & src );
	~Form( void );

	Form &	operator=( Form const & rhs );

	const std::string &	getName( void ) const;
	size_t				getGToExec( void ) const;
	size_t				getGToSign( void ) const;
	bool				getSignature( void ) const;

	Form &				beSigned( Bureaucrat signatory );

	class GradeTooHighException : public std::exception {

	public:
		virtual char const *	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual char const *	what( void ) const throw();
	};
};

std::ostream&	operator<<( std::ostream& os, Form const & form );

#endif

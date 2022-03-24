#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {

private :

	const std::string	_name;
	const std::string	_target;
	const size_t		_grdToSign;
	const size_t		_grdToExec;
	bool				_signed;

protected :

	Form( void );
    virtual void run() const = 0;

public :

	Form( const std::string name, const std::string target,
		  size_t toSign, size_t toExec );
	Form( Form const & src );
	~Form( void );

	Form &	operator=( Form const & rhs );

	const std::string &	getName( void ) const;
	size_t				getGToExec( void ) const;
	size_t				getGToSign( void ) const;
	bool				getSignature( void ) const;
    const std::string &	getTarget() const;

	Form &				beSigned( Bureaucrat signatory );
	void				execute( Bureaucrat const & executor ) const;

	class GradeTooHighException : public std::exception {

	public:
		virtual char const *	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {

	public:
		virtual char const *	what( void ) const throw();
	};

    class NotSignedException : public std::exception {

    public:
        const char *what() const throw ();
    };
};

std::ostream&	operator<<( std::ostream& os, Form const & form );

#endif

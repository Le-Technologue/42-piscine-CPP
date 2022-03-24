#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:

	PresidentialPardonForm( void );

protected:

    virtual void run() const;

public:

	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & copy );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm&	operator=( PresidentialPardonForm const & rhs );
};
#endif

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:

	ShrubberyCreationForm( void );

protected:

    virtual void run() const;

public:

	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & copy );
	virtual ~ShrubberyCreationForm( void );

	ShrubberyCreationForm&	operator=( ShrubberyCreationForm const & rhs );
};
#endif

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:

	RobotomyRequestForm( void );

protected:

    virtual void run() const;

public:

	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & copy );
	~RobotomyRequestForm( void );

	RobotomyRequestForm&	operator=( RobotomyRequestForm const & rhs );
};
#endif

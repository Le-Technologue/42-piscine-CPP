#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
class Form;

enum FormTypes {

	SCF,
	RRF,
	PPF,
	UNK
};

class Intern {

private:

	static Form *	fetchForm
	( const std::string sought, const std::string target );

public:

	Intern( void );
	Intern( const Intern & src );
	~Intern( void );

	Intern &	operator=( const Intern & src );

	Form *	makeForm( const std::string name, const std::string target );

	class FormTypeUnknown : public std::exception {

	public:
		virtual char const *	what( void ) const throw();
	};

};
#endif

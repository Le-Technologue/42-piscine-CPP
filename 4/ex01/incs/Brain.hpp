#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define IDEAS_QTY 100

class Brain {

private:

	std::string	_ideas[ IDEAS_QTY ];

public:

	Brain( void );
	Brain( Brain const& src );
	~Brain( void );

	Brain&	operator=( Brain const& rhs );

	void		setIdea( size_t index, std::string idea );
	std::string	getIdea( size_t index ) const;
};
#endif

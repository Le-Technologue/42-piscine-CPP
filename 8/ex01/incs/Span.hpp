#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private:

	unsigned int		_qty;
	std::vector<int>	_data;

	Span( void );

public:

	Span( const unsigned int qty );
	Span( const Span & src );
	~Span();

	Span &			operator=( const Span &rhs );

	void				addNumber( const int entry );

	unsigned int	shortestSpan( void ) const;
	unsigned int	longestSpan( void ) const;

	void			randFill( void );
	void			showSpan( void ) const;
};

#endif

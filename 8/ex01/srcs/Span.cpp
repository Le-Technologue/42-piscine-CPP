#include <iostream>
#include <stdexcept>
#include <limits>
#include <algorithm>
#include "Span.hpp"

Span::Span() { }

Span::Span( unsigned int qty ) : _qty(qty) { _data.reserve(_qty); }

Span::Span( const Span & src ) { *this = src; }

Span::~Span() { }

Span &	Span::operator=( const Span & rhs )
{
	_qty = rhs._qty;
	_data = rhs._data;
	return *this;
}

void	Span::addNumber( int entry )
{
	if (_data.size() >= _qty)
		throw std::length_error("Span is full");
	_data.push_back(entry);
}

unsigned int	Span::shortestSpan( void ) const
{
	if (_data.size() < 2)
		throw std::logic_error("2 values or more needed to measure a span");

	unsigned int		span = std::numeric_limits<unsigned int>::max();
	std::vector<int>	sorted = _data;

	std::sort( sorted.begin(), sorted.end() );

	std::vector<int>::const_iterator it = sorted.begin();
	while ( ++it != sorted.end() )
	{
		if ( static_cast<unsigned int>(abs(*it - *(it - 1))) < span )
			span = *it - *(it - 1);
	}
	return span;
}

unsigned int	Span::longestSpan( void ) const
{
	if (_data.size() < 2)
		throw std::logic_error("2 values or more needed to measure a span");

	return	( *std::max_element( _data.begin(), _data.end() )
			- *std::min_element( _data.begin(), _data.end() ));
}

void	Span::randFill( void )
{
	srand(time(NULL));
	std::generate_n( std::back_inserter(_data), _qty, std::rand );
}

void	Span::showSpan( void ) const
{
	std::vector<int>::const_iterator it = _data.begin();

	while ( it != _data.end() )
	{
		std::cout << "( " << *it << " ) found at index [" <<
		it - _data.begin() << "]" << std::endl;
		it++;
	}
}

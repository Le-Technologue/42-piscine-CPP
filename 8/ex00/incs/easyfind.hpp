#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template< typename T >
typename T::iterator	easyfind( T & container, int val )
{
	typename T::iterator it;

	it = std::find( container.begin(), container.end(), val );
	if ( it == container.end() )
		throw std::exception();
	return it;
}

#endif

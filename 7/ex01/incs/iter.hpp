#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	display_data( T data )
{
	std::cout << data << std::endl;
}

template< typename T >
void	iter( T* arr, size_t len, void (*fct)( T const & itm ) )
{
	while ( len-- )
		fct( *arr++ );
}

#endif

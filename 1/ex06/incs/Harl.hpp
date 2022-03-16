#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

enum	e_log_levels {
	DBG,
	INF,
	WRN,
	ERR,
	OFF
};

class	Harl {

public:

	Harl( void );
	~Harl( void );

	void	complain( std::string level );

private:

	void	(Harl::*_fct_map[OFF])( void );

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
};

#endif

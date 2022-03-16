#include "Harl.hpp"

Harl::Harl( void ) {
	this->_fct_map[DBG] = &Harl::_debug;
	this->_fct_map[INF] = &Harl::_info;
	this->_fct_map[WRN] = &Harl::_warning;
	this->_fct_map[ERR] = &Harl::_error;
}

Harl::~Harl( void ) {
	return ;
}

void	Harl::_debug( void ) {

	std::cout << "This is a DEBUG level log" << std::endl;
}

void	Harl::_info( void ) {

	std::cout << "This is an INFO level log" << std::endl;
}

void	Harl::_warning( void ) {

	std::cout << "This is a WARNING level log" << std::endl;
}

void	Harl::_error( void ) {

	std::cout << "This is an ERROR level log" << std::endl;
}

void	Harl::complain( std::string call ) {

	static const std::string call_map[]
	= { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	level = 0;

	while (level < OFF && call != call_map[level])
		level++;
	switch (level)
	{
		case DBG:
			this->_debug();
		case INF:
			this->_info();
		case WRN:
			this->_warning();
		case ERR:
			this->_error();
			break ;
		default:
			std::cout << "This isn't a valid log level, but it certainly can't be lamer than the log messages suggested in the subject." << std::endl;
	}
}

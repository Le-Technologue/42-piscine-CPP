#include "Harl.hpp"
#include <iostream>

int main( int argc, char *argv[] ) {

// Input control
	if (argc != 2) {
		std::cerr << "Usage: ./test <LOG_LEVEL>" << std::endl;
		return (1);
	}

	Harl	harl;
	std::string input = argv[1];

	harl.complain(input);

	return 0;
}

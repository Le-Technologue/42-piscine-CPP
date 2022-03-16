#include <iostream>
#include <fstream>
#include <sstream>
#include "replace_replacement.hpp"

// Replacement algorithm
std::string	replace_replacement(std::string substitute,
								std::string needle,
								std::filebuf * haystack_filebuf)
{
	std::stringstream	buffer;
	buffer << haystack_filebuf;

	std::string			haystack = buffer.str();
	size_t				pos = 0;

	while ((pos = haystack.find(needle, pos)) != std::string::npos)
	{
		haystack.erase(pos, needle.length());
		haystack.insert(pos, substitute);
		pos += substitute.length();
	}
	return (haystack);
}

int main(int argc, char *argv[])
{
// Controlling input
	if (argc != 4) {
		std::cerr << "USAGE: ./replace_replacement <source filename> <searched str> <substitute str>" << std::endl;
		return (1);
	}

// Opening filestreams
	std::ifstream	ifs(SOURCE_FILENAME);

	if (ifs.fail()) {
		std::cerr << "Error: source file can't be opened." << std::endl;
		return (2);
	}

	std::string		destination_filename = SOURCE_FILENAME;
	destination_filename += ".replace";
	std::ofstream	ofs(destination_filename.c_str());

	if (ofs.fail()) {
		std::cerr << "Error: destination file can't be opened." << std::endl;
		ifs.close();
		return (2);
	}

/* * REPLACEMENT ALGORITHM ************************************************** */

	ofs << replace_replacement(SUBSTITUTE_STR, NEEDLE_STR, ifs.rdbuf());

/* ************************************************************************** */

// Closing streams
	ifs.close();
	ofs.close();
	return (0);
}

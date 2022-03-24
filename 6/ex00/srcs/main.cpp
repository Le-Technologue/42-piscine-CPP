#include <iostream>
#include <sstream>
#include <limits>

int	main( int ac, char *av[] )
{
	// Arg check
	if ( ac != 2 || !av[1] )
	{
		std::cerr << "USAGE: ./test <literal>" << std::endl;
		return 1;
	}

	// Variables (from biggest to smallest cast)
	double		dbl;
	float		flt;
	int			itg;
	char		chr;

	// Convert that char * input in a string object
	std::string			raw_str(av[1]);

	// Serialize string to our widest type conversion
	std::stringstream	raw_ss(raw_str);
	raw_ss >> dbl;

	// Converting down to the smaller types
	if (raw_str.size() == 1)
	{
		// Making an exception for properly converting single chars
		chr = *av[1];
		std::cout << chr << std::endl;
	}
	else
	{
		if ( dbl == 0 && *av[1] != '0' )
		{
			// Parsing...
			std::cout << "Parsing isn't the point of this exercice:" <<
			std::endl << "Could you at least TRY to input NUMBERS ?" <<
			std::endl;
			return 1;
		}
		chr = static_cast<char>( dbl );
	}
	flt = static_cast<float>( dbl );
	itg = static_cast<int>( dbl );

	// Testing stupid ass non existent math numbers even though that has no
	// pedagogic interest here because the douche that made that subject
	// is an elitist bully.
	if ( raw_str == "nan" || raw_str == "nanf" )
	{
		std::cout << "chr: not a char" << std::endl;
		std::cout << "int: out of range" << std::endl;
		std::cout << "flt: nanf" << std::endl;
		std::cout << "dbl: nan" << std::endl;
		return 0;
	}
	else if ( raw_str == "inff" || raw_str == "+inff" )
	{
		std::cout << "chr: not a char" << std::endl;
		std::cout << "int: out of range" << std::endl;
		std::cout << "flt: +inff" << std::endl;
		std::cout << "dbl: " << std::numeric_limits<float>::max() << std::endl;
		return 0;
	}
	else if ( raw_str == "-inff" )
	{
		std::cout << "chr: not a char" << std::endl;
		std::cout << "int: out of range" << std::endl;
		std::cout << "flt: -inff" << std::endl;
		std::cout << "dbl: " << std::numeric_limits<float>::min() << std::endl;
		return 0;
	}
	else if ( dbl >= std::numeric_limits<double>::max() || raw_str == "inf" )
	{
		std::cout << "chr: not a char" << std::endl;
		std::cout << "int: out of range" << std::endl;
		std::cout << "flt: inff" << std::endl;
		std::cout << "dbl: inf" << std::endl;
		return 0;
	}
	else if ( dbl <= std::numeric_limits<double>::min() || raw_str == "-inf" )
	{
		std::cout << "chr: not a char" << std::endl;
		std::cout << "int: out of range" << std::endl;
		std::cout << "flt: -inff" << std::endl;
		std::cout << "dbl: -inf" << std::endl;
		return 0;
	}

	// CHAR : boundary checks & display
	if ( chr <= 31 || chr == 127 )
		std::cout << "chr: non displayable" << std::endl;
	else if ( chr < 0 || chr > 127 )
		std::cout << "chr: not a char" << std::endl;
	else
		std::cout << "chr: " << chr << std::endl;

	// INT : boundary checks & display
	if (	dbl < std::numeric_limits<int>::min()
		||	dbl > std::numeric_limits<int>::max() )
		std::cout << "int: out of range" << std::endl;
	else {
		std::cout << "int: " << itg << std::endl;
	}

	// FLOATING POINTS : display
	std::cout << "flt: " << flt << "f" << std::endl;
	std::cout << "dbl: " << dbl << std::endl;

	return 0;
}

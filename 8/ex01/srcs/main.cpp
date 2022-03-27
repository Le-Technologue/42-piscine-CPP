#include "Span.hpp"
#include <iostream>

int main ( void )
{
	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "\"sp.showSpan();\"" << std::endl;
		std::cout << "v" << std::endl;

		sp.showSpan();

		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "[ ~~~~~ QUANTITY LIMIT ~~~~~ ]\n" << std::endl;

		std::cout << "\"try { sp.addNumber(666); }\"" << std::endl;
		std::cout << "v" << std::endl;

		try { sp.addNumber(666); }

		catch ( std::exception & e )
		{
			std::cout << "\"catch ( std::exception & e ){ std::cout << e.what() << std::endl; }\"" << std::endl;
			std::cout << "v" << std::endl;

			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ RANDOM VALUES FILLS ~~~~~ ]\n" << std::endl;

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 10 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(10);\"" << std::endl;

		Span sp = Span(10);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << "\"sp.showSpan();\"" << std::endl;
		std::cout << "v" << std::endl;

		sp.showSpan();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 100 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(100);\"" << std::endl;

		Span sp = Span(100);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 1000 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(1000);\"" << std::endl;

		Span sp = Span(1000);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 10000 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(10000);\"" << std::endl;

		Span sp = Span(10000);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 25000 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(25000);\"" << std::endl;

		Span sp = Span(25000);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "[ ~~~~~ 100000 values ~~~~~ ]\n" << std::endl;
	{
		std::cout << "\"Span sp = Span(100000);\"" << std::endl;

		Span sp = Span(100000);

		std::cout << std::endl;
		std::cout << "\"sp.randFill();\"" << std::endl;
		std::cout << std::endl;

		sp.randFill();

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	/* std::cout << std::endl; */
	/* std::cout << "[ ~~~~~ 500000 values ~~~~~ ]\n" << std::endl; */
	/* { */
	/* 	std::cout << "\"Span sp = Span(500000);\"" << std::endl; */

	/* 	Span sp = Span(500000); */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"sp.randFill();\"" << std::endl; */
	/* 	std::cout << std::endl; */

	/* 	sp.randFill(); */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl; */
	/* 	std::cout << "v" << std::endl; */
	/* 	std::cout << sp.shortestSpan() << std::endl; */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl; */
	/* 	std::cout << "v" << std::endl; */
	/* 	std::cout << sp.longestSpan() << std::endl; */
	/* } */

	/* std::cout << std::endl; */
	/* std::cout << "[ ~~~~~ 1000000 values ~~~~~ ]\n" << std::endl; */
	/* { */
	/* 	std::cout << "\"Span sp = Span(1000000);\"" << std::endl; */

	/* 	Span sp = Span(1000000); */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"sp.randFill();\"" << std::endl; */
	/* 	std::cout << std::endl; */

	/* 	sp.randFill(); */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"std::cout << sp.shortestSpan() << std::endl;\"" << std::endl; */
	/* 	std::cout << "v" << std::endl; */
	/* 	std::cout << sp.shortestSpan() << std::endl; */

	/* 	std::cout << std::endl; */
	/* 	std::cout << "\"std::cout << sp.longestSpan() << std::endl;\"" << std::endl; */
	/* 	std::cout << "v" << std::endl; */
	/* 	std::cout << sp.longestSpan() << std::endl; */
	/* } */

	return 0;
}

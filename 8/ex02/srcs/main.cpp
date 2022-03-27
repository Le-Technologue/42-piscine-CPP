#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main ( void )
{
	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" << std::endl;
	{
		std::cout << "[ ~~~~~ MutantStack... ~~~~~ ]\n" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "\"std::cout << mstack.top() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "\"std::cout << mstack.size() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;

		std::cout << mstack.size() << std::endl;

		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		/* std::cout << "[ ~~~~~ ... in a stack... ~~~~~ ]\n" << std::endl; */
		/* std::stack<int> s(mstack); */
		
		/* s.push(5); */
		/* s.push(17); */

		/* std::cout << s.top() << std::endl; */

		/* s.pop(); */

		/* std::cout << s.size() << std::endl; */

		/* s.push(3); */
		/* s.push(5); */
		/* s.push(737); */
		/* //[...] */
		/* s.push(0); */
	}
	{
		std::cout << std::endl;
		std::cout << "[ ~~~~~ ...vs list ~~~~~ ]\n" << std::endl;
		std::list<int> lst;

		lst.push_back(5);
		lst.push_back(17);

		std::cout << lst.back() << std::endl;

		lst.pop_back();

		std::cout << lst.size() << std::endl;

		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		//[...]
		lst.push_back(0);

		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}

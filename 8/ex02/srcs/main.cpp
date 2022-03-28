#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main ( void )
{
	std::cout << "[ ~~~~~ SUBJECT TESTS ~~~~~ ]\n" << std::endl;
	{
		std::cout << "[ ~~~~~ MutantStack inherited stack:: behavior ~~~~~ ]\n" << std::endl;

		std::cout << "\"MutantStack<int> mstack;\"" << std::endl;
		MutantStack<int> mstack;

		std::cout << std::endl;
		std::cout << "\"mstack.push(5);\"" << std::endl;
		mstack.push(5);

		std::cout << std::endl;
		std::cout << "\"mstack.push(17);\"" << std::endl;
		mstack.push(17);

		std::cout << std::endl;
		std::cout << "\"std::cout << mstack.top() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << std::endl;
		std::cout << "\"mstack.pop();\"" << std::endl;
		mstack.pop();

		std::cout << std::endl;
		std::cout << "\"std::cout << mstack.size() << std::endl;\"" <<
		std::endl;
		std::cout << "v" << std::endl;
		std::cout << mstack.size() << std::endl;


		std::cout << std::endl;
		std::cout << "\"mstack.push(3);\"" << std::endl;
		mstack.push(3);

		std::cout << std::endl;
		std::cout << "\"mstack.push(5);\"" << std::endl;
		mstack.push(5);

		std::cout << std::endl;
		std::cout << "\"mstack.push(737);\"" << std::endl;
		mstack.push(737);
		//[...]
		std::cout << std::endl;
		std::cout << "\"mstack.push(0);\"" << std::endl;
		mstack.push(0);

		std::cout << std::endl;
		std::cout << "[ ~~~~~ MutantStack's very own iterator capacities ~~~~~ ]\n" << std::endl;

		std::cout << "\"MutantStack<int>::iterator it = mstack.begin();\"" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();

		std::cout << std::endl;
		std::cout << "\"MutantStack<int>::iterator ite = mstack.end();\"" << std::endl;
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << std::endl;
		std::cout << "[ ----- iterator display loop ----- ]\n" << std::endl;
		while (it != ite)
		{
			std::cout << "\"std::cout << *(it++) << std::endl;\"" << std::endl;
			std::cout << "v" << std::endl;
			std::cout << *(it++) << std::endl;
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
	std::cout << std::endl;
	std::cout << "[ ~~~~~ MANDATED TESTS ~~~~~ ]" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "[ ~~~~~ MUTANTSTACK VS LIST ~~~~~ ]\n" << std::endl;

		std::cout << "\"std::list<int> lst;\"" << std::endl;
		std::list<int> lst;

		std::cout << std::endl;
		std::cout << "\"lst.push_back(5);\"" << std::endl;
		lst.push_back(5);

		std::cout << std::endl;
		std::cout << "\"lst.push_back(17);\"" << std::endl;
		lst.push_back(17);

		std::cout << std::endl;
		std::cout << "\"std::cout << lst.back() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << lst.back() << std::endl;

		std::cout << std::endl;
		std::cout << "\"lst.pop_back();\"" << std::endl;
		lst.pop_back();

		std::cout << std::endl;
		std::cout << "\"std::cout << lst.size() << std::endl;\"" << std::endl;
		std::cout << "v" << std::endl;
		std::cout << lst.size() << std::endl;

		std::cout << std::endl;
		std::cout << "\"lst.push_back(3);\"" << std::endl;
		lst.push_back(3);

		std::cout << std::endl;
		std::cout << "\"lst.push_back(5);\"" << std::endl;
		lst.push_back(5);

		std::cout << std::endl;
		std::cout << "\"lst.push_back(737);\"" << std::endl;
		lst.push_back(737);

		std::cout << std::endl;
		//[...]
		std::cout << "\"lst.push_back(0);\"" << std::endl;
		lst.push_back(0);

		std::cout << std::endl;
		std::cout << "[ ~~~~~ list iterator capacities ~~~~~ ]\n" << std::endl;

		std::cout << "\"std::list<int>::iterator it = lst.begin();\"" << std::endl;
		std::list<int>::iterator it = lst.begin();

		std::cout << std::endl;
		std::cout << "\"std::list<int>::iterator ite = lst.end();\"" << std::endl;
		std::list<int>::iterator ite = lst.end();

		++it;
		--it;

		std::cout << std::endl;
		std::cout << "[ ----- iterator display loop ----- ]\n" << std::endl;
		while (it != ite)
		{
			std::cout << "\"std::cout << *(it++) << std::endl;\"" << std::endl;
			std::cout << "v" << std::endl;
			std::cout << *(it++) << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "[ ~~~~~ ADDITIONAL TESTS ~~~~~ ]" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\"MutantStack<std::string> ms;\"" << std::endl;
		MutantStack<std::string>	ms;

		std::cout << std::endl;
		std::cout << "\"ms.push(\"hi there\");\"" << std::endl;
		ms.push("hi there");

		std::cout << std::endl;
		std::cout << "\"ms.push(\"how are you doing\");\"" << std::endl;
		ms.push("how are you doing");

		std::cout << std::endl;
		std::cout << "\"ms.push(\"today\");\"" << std::endl;
		ms.push("today");

		std::cout << std::endl;
		std::cout << "[ ~~~~~ COPY CONSTRUCTION ~~~~~ ]" << std::endl;

		std::cout << std::endl;
		std::cout << "\"MutantStack<std::string>	cpy(ms);\"" << std::endl;
		MutantStack<std::string>	cpy(ms);

		std::cout << std::endl;
		std::cout << "\"MutantStack<std::string>::iterator it = cpy.begin();\"" << std::endl;
		MutantStack<std::string>::iterator it = cpy.begin();

		std::cout << std::endl;
		std::cout << "\"MutantStack<std::string>::iterator ite = cpy.end();\"" << std::endl;
		MutantStack<std::string>::iterator ite = cpy.end();

		std::cout << std::endl;
		std::cout << "[ ----- iterator display loop ----- ]\n" << std::endl;
		while (it != ite)
		{
			std::cout << "\"std::cout << *(it++) << std::endl;\"" << std::endl;
			std::cout << "v" << std::endl;
			std::cout << *(it++) << std::endl;
		}

		std::cout << std::endl;
		std::cout << "[ ~~~~~ INHERITED ASSIGNMENT OPERATOR ~~~~~ ]" <<
		std::endl;

		std::cout << std::endl;
		std::cout << "\"ms.pop();\"" << std::endl;
		ms.pop();

		std::cout << std::endl;
		std::cout << "\"cpy = ms;\"" << std::endl;
		cpy = ms;

		std::cout << std::endl;
		std::cout << "\"it = cpy.begin();\"" << std::endl;
		it = cpy.begin();

		std::cout << std::endl;
		std::cout << "\"ite = cpy.end();\"" << std::endl;
		ite = cpy.end();

		std::cout << std::endl;
		std::cout << "[ ----- iterator display loop ----- ]\n" << std::endl;
		while (it != ite)
		{
			std::cout << "\"std::cout << *(it++) << std::endl;\"" << std::endl;
			std::cout << "v" << std::endl;
			std::cout << *(it++) << std::endl;
		}
		std::cout << std::endl;
	}
}

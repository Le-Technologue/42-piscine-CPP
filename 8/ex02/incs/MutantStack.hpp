#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public :

	MutantStack( void ): std::stack<T>() { }
	MutantStack( const MutantStack & src ): std::stack<T>(src) { }
	virtual ~MutantStack( void ) { }

	MutantStack & operator=(const MutantStack & rhs) {
		std::stack<T>::operator=(rhs);
	}

	typedef typename MutantStack::container_type::iterator iterator;

	iterator begin() {
		return (this->c.begin());
	}

	iterator end() {
		return(this->c.end());
	}
};

#endif

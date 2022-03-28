#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {

private:

	unsigned int	_size;
	T *				_data;

public:

	Array() : _size(0)
	{
		_data = NULL;
	}

	Array( unsigned int n ) : _size(n)
	{
		_data = new T[n];
	}

    Array( const Array & src ) : _data(NULL)
	{
		*this = src;
	}

	~Array()
	{
		delete [] _data;
	}

	Array &			operator=( const Array & rhs )
	{
		if (_data)
			delete [] _data;

		_size = rhs._size;
		_data = new T[rhs._size];

		for (unsigned int i = 0 ; i < _size; i++)
			_data[i] = rhs._data[i];

		return *this;
	}

	T &				operator[]( unsigned int idx )
	{
		if ( idx >= _size )
			throw std::out_of_range("Index is exceeding array range");
		return _data[idx];
	}

	unsigned int	size() const
	{
		return _size;
	}
};

#endif

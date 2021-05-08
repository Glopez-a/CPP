#include "Array.hpp"

template <typename T>
Array<T>::Array(/* args */)
{
	_array = 0;
	_len = 0;
}

template <typename T>
Array<T>::Array(size_t n)
{
	_array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const &src):
	_array(nullptr), _len(0)
{
	int i = 0;
	if (src._len)
	{
		_array = new T[src._len + 1];
		while (i < src._len)
			_array[i] = src._array[i++];
		_array[i] = 0;
	}
	_len = src.size();
}

template <typename T>
T	&Array<T>::operator=(Array<T> const &src)
{
	int i = 0;
	if (src._len)
	{
		if (_len)
		{
			while (_array[i])
				delete (_array[i++]);
		}
		_array = new T[src._len + 1];
		i = 0;
		while (src._array[i])
			_array[i] = src._array[i++];
		_array[i] = 0;
	}
	else
	{
		if (_len)
		{
			while (_array[i])
				delete (_array[i++]);
		}
		_len = 0;
		_array = (nullptr);
	}
}

template<typename T>
const char* Array<T>::InacessibleMemoryException::what() const throw()
{
	return ("ArrayException: index too big");
}

template <typename T>
T	&Array<T>::operator[](size_t n)
{
	if (n > _len)
		throw Array::InacessibleMemoryException();
	return (_array[n]);
}

template <typename T>
size_t	Array<T>::size() const
{
	return (_len);
}

template <typename T>
Array<T>::~Array()
{
}


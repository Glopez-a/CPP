#include "Array.tpp"

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
	_len = n;
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
Array<T>	&Array<T>::operator=(Array<T> const &src)
{
	unsigned long i = 0;
	if (src._len)
	{
		if (_len)
			delete (_array);
		_array = new T[src._len + 1];
		i = 0;
		while (i < src._len)
		{
			_array[i] = src._array[i];
			i++;
		}
		_array[i] = 0;
		_len = src._len;
	}
	else
	{
		if (_len)
			delete (_array);
		_len = 0;
		_array = (nullptr);
	}
	return (*this);
}


template<typename T>
const char* Array<T>::InacessibleMemoryException::what() const throw()
{
	return ("ArrayException: element is out of the limits");
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
	if (_len)
		delete[] _array;
}


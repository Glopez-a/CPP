#ifndef ARRAY_TPP
#define ARRAY_TPP

# include <cctype>
#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
	T	*_array;
	size_t	_len;
public:
	Array(/* args */);
	Array(size_t n);
	Array(Array<T> const &src);
	~Array();
	class  InacessibleMemoryException: public std::exception
    {
        virtual const char *what() const throw();
    };
	Array<T>	&operator=(Array<T> const &src);
	T	&operator[](size_t n);
	size_t	size() const;

};


#endif
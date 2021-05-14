#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src):
	std::stack<T>(src)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &src)
{
	this->c = src.c;
	return (*this);
}

template <typename T>
typename std::deque<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

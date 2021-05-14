#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
private:
	/* data */
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack();
	MutantStack(MutantStack const &src);
	~MutantStack();
	MutantStack	&operator=(MutantStack const &src);
	iterator	begin();
	iterator	end();
};


#endif

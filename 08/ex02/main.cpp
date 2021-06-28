#include "MutantStack.hpp"
#include "MutantStack.cpp"
#include <list>


void PrintStack(std::stack<int> s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    PrintStack(s);
    std::cout << x << " ";
    s.push(x);
}

int	main()
{
	MutantStack<int>    mstack;
	std::list<int>		lst;

	std::cout << "------ MUTANTSTACK ------\n";

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.empty() << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "------ LIST ------\n";

	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.empty() << std::endl;
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	++lit;
	--lit;
	while(lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> t(lst);

	std::cout << "------" << std::endl;


	s.push(10);
	PrintStack(s);
	std::cout << std::endl;
	
	return 0;
}
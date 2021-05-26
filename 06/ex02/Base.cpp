#include "Base.hpp"

Base::~Base()
{
}

Base	*generate()
{
	int random = (rand() % 3);
	if (random == 0)
	{
		A	*a = new A;
		return (a);
	}
	else if (random == 1)
	{
		B	*b = new B;
		return (b);
	}
	else
	{
		C	*c = new C;
		return (c);
	}
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(p))
		std::cout << "C\n";
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(&p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(&p))
		std::cout << "C\n";
}
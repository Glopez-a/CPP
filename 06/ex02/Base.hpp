#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{
}

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void);
void	identify_from_pointer(Base * p);
void	identify_from_reference(Base & p);

#endif

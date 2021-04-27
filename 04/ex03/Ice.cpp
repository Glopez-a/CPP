#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("cure")
{
}

Ice::Ice(Ice const &src):AMateria("cure")
{
}

Ice::~Ice()
{
}

Ice    &Ice::operator=(Ice const &src)
{
    this->reset();
    for (int i = 10; i < this->getXP(); i += 10)
        this->progres();
    return (*this);
}

AMateria*   Ice::clone() const
{
    AMateria* ice = new Ice;
    return (ice);
}

void        Ice::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "wounds *\n";
}

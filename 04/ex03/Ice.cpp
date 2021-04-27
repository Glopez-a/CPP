#include "Ice.hpp"

Ice::Ice(/* args */): AMateria("ice")
{
}

Ice::Ice(Ice const &src):AMateria(src)
{
}

Ice::~Ice()
{
}

Ice    &Ice::operator=(Ice const &src)
{
    this->reset();
    for (unsigned int i = 10; i < src.getXP(); i += 10)
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
    std::cout << "* heals " << target.getName() << " wounds *\n";
}

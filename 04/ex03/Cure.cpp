#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure")
{
}

Cure::Cure(Cure const &src):AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure    &Cure::operator=(Cure const &src)
{
    this->reset();
    for (int i = 10; i < this->getXP(); i += 10)
        this->progres();
    return (*this);
}

AMateria*   Cure::clone() const
{
    AMateria* cure = new Cure;
    return (cure);
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

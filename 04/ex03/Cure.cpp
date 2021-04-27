#include "Cure.hpp"

Cure::Cure(/* args */): AMateria("cure")
{
}

Cure::Cure(Cure const &src): AMateria(src)
{
}

Cure::~Cure()
{
}

Cure    &Cure::operator=(Cure const &src)
{
    this->reset();
    for (unsigned int i = 10; i < src.getXP(); i += 10)
        this->progres();
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    AMateria* cure = new Cure;
    return (cure);
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

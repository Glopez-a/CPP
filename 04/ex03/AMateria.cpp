#include "AMateria.hpp"

AMateria::AMateria(/* args */): _xp(0)
{

}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria::~AMateria()
{

}

AMateria   &AMateria::operator=(AMateria const &other)
{

}

std::string const &AMateria::getType() const
{

}

unsigned int AMateria::getXP() const
{

}


virtual void use(ICharacter& target)
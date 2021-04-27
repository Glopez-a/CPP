#include "AMateria.hpp"

AMateria::AMateria(std::string type): _xp(0), _type(type)
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
    this->_type = other._type;
    this->_xp = other._xp;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void        AMateria::reset()
{
    this->_xp = 0;
}

void        AMateria::progres()
{
    this->_xp += 10;
}

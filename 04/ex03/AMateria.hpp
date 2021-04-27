#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
    unsigned int    _xp;
public:
    AMateria(/* args */);
    AMateria(AMateria const &other);
    ~AMateria();
    AMateria   &operator=(AMateria const &other);
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
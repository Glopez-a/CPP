#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
    unsigned int    _xp;
    std::string     _type;
public:

    AMateria(std::string type);
    AMateria(AMateria const &other);
    virtual ~AMateria();
    AMateria   &operator=(AMateria const &other);
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    void    reset();
    void    progres();

};

#endif
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
private:
    AMateria();
    unsigned int    _xp;
    std::string     _type;
public:

    AMateria(std::string type);
    AMateria(AMateria const &other);
    virtual ~AMateria();
    AMateria   &operator=(AMateria const &other);
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target) = 0;
    void    reset();
    void    progres();

};

#endif

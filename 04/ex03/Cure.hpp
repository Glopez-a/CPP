#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure: public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure(Cure const &src);
    ~Cure();
    Cure &operator=(Cure const &src);
    AMateria* clone(void) const;
    void    use(ICharacter &target);
};
#endif

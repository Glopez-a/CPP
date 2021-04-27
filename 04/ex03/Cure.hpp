#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure(Cure const &src);
    ~Cure();
    Cure &operator=(Cure const &src);
    AMateria* clone() const;
    void    use(ICharacter &target);
};
#endif

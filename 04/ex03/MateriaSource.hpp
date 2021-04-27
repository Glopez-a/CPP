#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource: public IMateriaSource
{
private:
    AMateria*   _materia[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    void    learnMateria(AMateria *materia);
    AMateria    *createMateria(std::string const &type);
};

#endif

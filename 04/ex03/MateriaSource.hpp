#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria    *_materia[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    void    learnMateria(AMateria* materia);
    AMateria    *createMateria(std::string const &type);
};

#endif

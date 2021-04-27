#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
    for (int i = 0; i < 4; i++)
    {
        this->_materia[i] = 0;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
            delete (this->_materia[i]);
    }
}

void        MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = materia;
            return;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (0);
}

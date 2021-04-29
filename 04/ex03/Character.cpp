#include "Character.hpp"

Character::Character(std::string name):
    _materias(0), _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character(Character const &src)
{
    *this = src;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete (this->_inventory[i]);
    }
}

Character   &Character::operator=(Character const &src)
{
    for (int i = 0; i < 4; i++)
        if (src._inventory[i])
            delete this->_inventory[i];
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    return (*this);
}

std::string const   &::Character::getName() const
{
    return (this->_name);
}

void                Character::equip(AMateria *m)
{
    if (!m || (m->getType() != "cure" && m->getType() != "ice") || this->_materias >= 4)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (m == this->_inventory[i])
            return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return;
        }
    }
}

void                Character::unequip(int idx)
{
    int i = 0;
    if (idx < 0 || !this->_inventory[i])
        return;
    this->_materias--;
    while (idx < 4)
    {
        if (!this->_inventory[i + 1])
        {
            this->_inventory[i] = NULL;
            return;
        }
        this->_inventory[i] = this->_inventory[i + 1];
        i++;
    }
}

void                Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3 || !this->_inventory[idx])
        return;
    this->_inventory[idx]->use(target);
}

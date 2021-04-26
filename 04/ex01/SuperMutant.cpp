# include "SuperMutant.hpp"

SuperMutant::SuperMutant(): 
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const &supermutant):
    Enemy(supermutant)
{
    *this = supermutant;
}


SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

SuperMutant   &SuperMutant::operator=(SuperMutant const &SuperMutant)
{
    this->_hp = SuperMutant._hp;
    this->_type = SuperMutant._type;
    return (*this);
}

int SuperMutant::getHP(void) const
{
    return (this->_hp);
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
    std::cout << this->_hp << std::endl;
}


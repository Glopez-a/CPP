# include "PowerFist.hpp"

PowerFist::PowerFist():
    AWeapon("Power Fist", 50, 8)
{
    std::cout << this->_name << " PowerFist created\n";
}

PowerFist::~PowerFist()
{
    std::cout << this->_name << " PowerFist destructed\n";
}

PowerFist &PowerFist::operator=(PowerFist const &powerfirst)
{
    this->_name = powerfirst._name;
    this->_apcost = powerfirst._apcost;
    this->_damage = powerfirst._damage;
    return (*this);
}


int PowerFist::getAPCost(void) const
{
    return (this->_apcost);
}

int PowerFist::getDamage(void) const
{
    return (this->_damage);

}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *\n";
}
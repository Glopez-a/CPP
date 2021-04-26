# include "PowerFist.hpp"

PowerFist::PowerFist():
    AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const &powerfist):
    AWeapon("Power Fist", 50, 8)
{
}


PowerFist::~PowerFist()
{
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
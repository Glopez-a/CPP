# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
    AWeapon("Plasma Rifle", 21, 5)
{
    std::cout << this->_name << " plasmarifle created\n";
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other):
    AWeapon(other)
{
    *this = other;
}


PlasmaRifle::~PlasmaRifle()
{
    std::cout << this->_name << " plasmarifle destructed\n";
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &plasmarifle)
{
    this->_name  = plasmarifle._name;
    this->_apcost = plasmarifle._apcost;
    this->_damage = plasmarifle._damage;
    return (*this);
}

int PlasmaRifle::getAPCost(void) const
{
    return (this->_apcost);
}

int PlasmaRifle::getDamage(void) const
{
    return (this->_damage);

}

void    PlasmaRifle::attack(void) const
{
    std::cout << "*piouuu piouuu piouuu *\n";
}
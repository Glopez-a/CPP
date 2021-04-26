# include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
    std::cout << this->_name << " weapon created\n";
}

AWeapon::AWeapon(AWeapon const &aweapon)
{
    *this = aweapon;
}

AWeapon::~AWeapon()
{
    std::cout << this->_name << " weapon destructed\n";
}

AWeapon &AWeapon::operator=(AWeapon const &aweapon)
{
    this->_name = aweapon._name;
    this->_apcost = aweapon._apcost;
    this->_damage = aweapon._damage;
    return (*this);
}

int AWeapon::getAPCost(void) const
{
    return (this->_apcost);
}

int AWeapon::getDamage(void) const
{
    return (this->_damage);
}

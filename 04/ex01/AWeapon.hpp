#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
private:
    std::string _name;
    int         _apcost;
    int         _damage;
public:
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon const &aweapon);
    virtual ~AWeapon();
    AWeapon &operator=(AWeapon const &aweapon);
    int getAPCost(void) const;
    int getDamage(void) const;
    virtual void attack() const = 0;
    std::string getName(void) const;
};



# endif
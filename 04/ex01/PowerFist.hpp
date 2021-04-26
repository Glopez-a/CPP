#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:
    std::string _name;
    int         _damage;
    int         _apcost;

public:
    PowerFist();
    PowerFist(PowerFist const &powerfist);
    ~PowerFist();
    PowerFist &operator=(PowerFist const &powerfist);
    int getAPCost(void) const;
    int getDamage(void) const;
    void    attack(void) const;
};


#endif
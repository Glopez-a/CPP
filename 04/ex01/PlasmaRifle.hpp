#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
private:
    std::string _name;
    int         _damage;
    int         _apcost;

public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &plasmarifle);
    ~PlasmaRifle();
    PlasmaRifle &operator=(PlasmaRifle const &plasmarifle);
    int getAPCost(void) const;
    int getDamage(void) const;
    void    attack(void) const;
};


#endif
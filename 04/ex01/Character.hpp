#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
    std::string _name;
    int         _ap;
    AWeapon     *_weapon;
public:
    Character(std::string const &name);
    Character(Character const &other);
    ~Character();
    Character &operator=(Character const &other);
    void        recoverAP();
    void        equip(AWeapon*);
    void        attack(Enemy*);
    std::string getName() const;
    int         getAP() const;
    AWeapon      *getWeapon() const;
};

std::ostream    &operator<<(std::ostream &out, Character const &character);

#endif

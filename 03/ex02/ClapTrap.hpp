#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <sys/time.h>
# include <unistd.h>

class ClapTrap
{
protected:
    std::string _name;
    int         _hit_points = 100;
    int         _max_hit_points = 100;
    int         _energy_points = 100;
    int         _max_energy_points = 100;
    int         _level = 1;
    int         _melee_attack = 100;
    int         _ranged_attack = 100;
    int         _armor_damage_red = 100;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif

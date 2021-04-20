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
    int         _hit_points;
    int         _max_hit_points;
    int         _energy_points;
    int         _max_energy_points;
    int         _level;
    int         _melee_attack;
    int         _ranged_attack;
    int         _armor_damage_red;

public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &other);
    virtual ~ClapTrap();
    ClapTrap   &operator=(ClapTrap const &other);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    std::string const &getName(void) const;

};

#endif

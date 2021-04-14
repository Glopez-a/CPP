#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <sys/time.h>
# include <unistd.h>

class ScavTrap
{
private:
    std::string _name;
    int         _hit_points;
    int         _max_hit_points;
    int         _energy_points;
    int         _max_energy_points;
    int         _level;
    int         _melee_attack;
    int         _ranged_attack;
    int         _armor_damage_red;
    static std::string _random_challengs[5];
    static std::string _challengs1;
    static std::string _challengs2;
    static std::string _challengs3;
    static std::string _challengs4;
    static std::string _challengs5;

public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other);
    ~ScavTrap();
    ScavTrap   &operator=(ScavTrap const &other);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(void);
};

#endif

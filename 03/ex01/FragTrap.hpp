#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <sys/time.h>
# include <unistd.h>



class   FragTrap
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
    static std::string _random_attacks[5];
    static std::string _at1;
    static std::string _at2;
    static std::string _at3;
    static std::string _at4;
    static std::string _at5;


public:
    FragTrap(std::string name);
    FragTrap(FragTrap const &other);
    ~FragTrap();
    FragTrap   &operator=(FragTrap const &other);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const &target);
};

#endif

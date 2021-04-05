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
    int         _hit_points = 100;
    int         _max_hit_points = 100;
    int         _energy_points = 100;
    int         _max_energy_points = 100;
    int         _level = 1;
    int         _melee_attack = 30;
    int         _ranged_attack = 20;
    int         _armor_damage_red = 5;
    static std::string _random_attacks[5];
    static std::string _at1;
    static std::string _at2;
    static std::string _at3;
    static std::string _at4;
    static std::string _at5;


public:
    FragTrap(std::string name);
    ~FragTrap();
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const &target);
};

#endif

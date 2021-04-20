# include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name):
    ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    std::cout << name << " , hello babys!\n";
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_attack = 60;
    this->_ranged_attack = 20;
    this->_armor_damage_red = 5;
}

SuperTrap::SuperTrap(SuperTrap const &other):
    ClapTrap(other._name), FragTrap(other._name), NinjaTrap(other._name)
{
    *this = other;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap " << this->_name << " going to sleep..\n";
}

SuperTrap   &SuperTrap::operator=(SuperTrap const &other)
{
    std::cout << other._name << " , hello babys!\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_max_hit_points = other._max_hit_points;
    this->_energy_points = other._energy_points;
    this->_max_energy_points = other._max_energy_points;
    this->_level = other._level;
    this->_melee_attack = other._melee_attack;
    this->_ranged_attack = other._ranged_attack;
    this->_armor_damage_red = other._armor_damage_red;
    return (*this);
}

void    SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}


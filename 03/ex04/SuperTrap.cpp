# include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    std::cout << name << " , hello babys!\n";
    this->_hit_points = this->FragTrap::_hit_points;
    this->_max_hit_points = this->FragTrap::_max_hit_points;
    this->_energy_points = this->NinjaTrap::_energy_points;
    this->_max_energy_points = this->NinjaTrap::_max_energy_points;
    this->_melee_attack = this->NinjaTrap::_melee_attack;
    this->_ranged_attack = this->FragTrap::_ranged_attack;
    this->_armor_damage_red = this->FragTrap::_armor_damage_red;
    std::cout << this->_hit_points << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other): ClapTrap(other._name)
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


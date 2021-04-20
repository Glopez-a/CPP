# include "ScavTrap.hpp"

std::string ScavTrap::_challengs1 = "Try to fly little butterfly!";
std::string ScavTrap::_challengs2 = "Move your ass bastard.";
std::string ScavTrap::_challengs3 = "Can you sing like Britney Spears?";
std::string ScavTrap::_challengs4 = "Easy peasy lemon squizy";
std::string ScavTrap::_challengs5 = "Hit the road Jack!";

std::string ScavTrap::_random_challengs[5] = {
    ScavTrap::_challengs1,
    ScavTrap::_challengs2,
    ScavTrap::_challengs3,
    ScavTrap::_challengs4,
    ScavTrap::_challengs5
};


ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << name << " has being created, go an take some coffee for her!\n";
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_melee_attack = 20;
    this->_ranged_attack = 15;
    this->_armor_damage_red = 3;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other._name)
{
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " cant fight anymore, good luck my friends\n";
}

ScavTrap   &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << other._name << " has being created, go an take some coffee for her!\n";
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

void    ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at range, causing " << 
    this->_ranged_attack << " points of damage!\n";
}

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at melee, causing " << 
    this->_melee_attack << " points of damage!\n";
}

void    ScavTrap::challengeNewcomer()
{
    struct timeval time; 
    gettimeofday(&time,NULL);
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    int random = rand() % 5;
    if (this->_energy_points >= 25)
    {
        this->_energy_points -= 25;
        std::cout << ScavTrap::_random_challengs[random] << std::endl;
    }
    else
        std::cout << "Not enought energy for " << this->_name << "\n";
    usleep(1045);
}
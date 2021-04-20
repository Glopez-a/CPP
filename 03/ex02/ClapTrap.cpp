# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
    std::cout << name << " has being created, this is gonna be good!\n";
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack = 0;
    this->_ranged_attack = 0;
    this->_armor_damage_red = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other): _name(other._name)
{
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " good bye\n";
}

ClapTrap   &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << other._name << " has being created, this is gonna be good!\n";
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

void    ClapTrap::takeDamage(unsigned int amount)
{
    int i = 0;

    if (amount < 0)
        std::cout << "You cant take a negative amount of damage!\n";
    else
    {
        std::cout << this->_name << " recieved " << amount << " points of damage..\n";
        while (i < (int)amount && this->_armor_damage_red > 0)
        {
            this->_armor_damage_red--;
            i++;
        }
        this->_armor_damage_red = 5;
        std::cout << this->_name << " stop " << i << " points of damage with his armor\n";
        while (i < (int)amount && this->_hit_points > 0)
        {
            this->_hit_points--;
            i++;
        }
    }
    std::cout << this->_name << " has " << this->_hit_points << " points of live\n";
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    int i = 0;

    std::cout << this->_name << " recieved " << amount << " points of life..\n";
    while ((int)amount > 0 && this->_hit_points < this->_max_hit_points)
    {
        this->_hit_points++;
        amount--;
        i++;
    }
    std::cout << "Frag has " << this->_hit_points << " points of live\n";
}

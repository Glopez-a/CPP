# include "FragTrap.hpp"

std::string FragTrap::_at1 = "butterfly";
std::string FragTrap::_at2 = "mosquito";
std::string FragTrap::_at3 = "bee";
std::string FragTrap::_at4 = "dung beetle";
std::string FragTrap::_at5 = "spider";

std::string FragTrap::_random_attacks[5] = {
    FragTrap::_at1,
    FragTrap::_at2,
    FragTrap::_at3,
    FragTrap::_at4,
    FragTrap::_at5
};

FragTrap::FragTrap(std::string name): _name(name)
{
    std::cout << name << " has being created, prepared to fight!\n";

    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack = 20;
    this->_ranged_attack = 15;
    this->_armor_damage_red = 3;
}

FragTrap::FragTrap(FragTrap const &other): _name(other._name)
{
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " go back home :(\n";
}

FragTrap   &FragTrap::operator=(FragTrap const &other)
{
    std::cout << other._name << " has being created, prepared to fight!\n";
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

void    FragTrap::rangedAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at range, causing " << 
    this->_ranged_attack << " points of damage!\n";
}

void    FragTrap::meleeAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at melee, causing " << 
    this->_melee_attack << " points of damage!\n";
}

void    FragTrap::takeDamage(unsigned int amount)
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


void    FragTrap::beRepaired(unsigned int amount)
{
    int i = 0;

    std::cout << this->_name << " recieved " << amount << " points of life..\n";
    while (amount > 0 && this->_hit_points < this->_max_hit_points)
    {
        this->_hit_points++;
        amount--;
        i++;
    }
    std::cout << "Frag has " << this->_hit_points << " points of live\n";
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    struct timeval time; 
    gettimeofday(&time,NULL);
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    int random = rand() % 5;
    if (this->_energy_points >= 25)
    {
        this->_energy_points -= 25;
        std::cout << this->_name << " throw the " << FragTrap::_random_attacks[random] << " attacks to " 
            << target << " causing " << this->_melee_attack << " points of damage!\n";
    }
    else
        std::cout << "Not enought energy for " << this->_name << "\n";
    usleep(1045);
}
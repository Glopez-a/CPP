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


ScavTrap::ScavTrap(std::string name)
{
    std::cout << name << " has being created, go an take some coffee for her!\n";
    this->_name = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " cant fight anymore, good luck my friends\n";
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

void    ScavTrap::takeDamage(unsigned int amount)
{
    int i = 0;

    if (amount < 0)
        std::cout << "You cant take a negative amount of damage!\n";
    else
    {
        std::cout << this->_name << " recieved " << amount << " points of damage..\n";
        while (i < amount && this->_armor_damage_red > 0)
        {
            this->_armor_damage_red--;
            i++;
        }
        this->_armor_damage_red = 5;
        std::cout << this->_name << " stop " << i << " points of damage with her armor\n";
        while (i < amount && this->_hit_points > 0)
        {
            this->_hit_points--;
            i++;
        }
    }
    std::cout << this->_name << " has " << this->_hit_points << " points of live\n";
}


void    ScavTrap::beRepaired(unsigned int amount)
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

void    ScavTrap::challengeNewcomer()
{
    struct timeval time; 
    gettimeofday(&time,NULL);
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    int random = rand() % 5;
    std::cout << ScavTrap::_random_challengs[random] << std::endl;
    usleep(1045);
}
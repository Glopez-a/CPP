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
    this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " cant fight anymore, good luck my friends\n";
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
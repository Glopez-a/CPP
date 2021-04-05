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

FragTrap::FragTrap(std::string name)
{
    std::cout << name << " has being created, prepared to fight!\n";
    this->_name = name;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " go back home :(\n";
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
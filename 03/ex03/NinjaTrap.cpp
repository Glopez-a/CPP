# include "NinjaTrap.hpp"

std::string NinjaTrap::_attack1 = "tickles in your feet";
std::string NinjaTrap::_attack2 = "some shampoo in your eyes";
std::string NinjaTrap::_attack3 = "pinch in your nipples";
std::string NinjaTrap::_attack4 = "wisky in your ass";
std::string NinjaTrap::_attack5 = "burn your hair";

std::string NinjaTrap::_random_attacks[5] = {
    NinjaTrap::_attack1,
    NinjaTrap::_attack2,
    NinjaTrap::_attack3,
    NinjaTrap::_attack4,
    NinjaTrap::_attack5
};

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
    std::cout << name << " has being created, say hi or die!\n";
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_melee_attack = 60;
    this->_ranged_attack = 5;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other): ClapTrap(other._name)
{
    *this = other;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap " << this->_name << " cant fight anymore, I'll see you soon..\n";
}

NinjaTrap   &NinjaTrap::operator=(NinjaTrap const &other)
{
    std::cout << other._name << " has being created, say hi or die!\n";
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

void    NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at range, causing " << 
    this->_ranged_attack << " points of damage!\n";
}

void    NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target << " at melee, causing " << 
    this->_melee_attack << " points of damage!\n";
}

void    NinjaTrap::ninjaShoebox(ClapTrap const &someone)
{
    struct timeval time; 
    gettimeofday(&time,NULL);
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    int random = rand() % 5;
    if (this->_energy_points >= 25)
    {
        this->_energy_points -= 25;
        std::cout << "The ninja " << this->_name << " attacks with " << NinjaTrap::_random_attacks[random] 
            << " " << someone.getName() << ", causing " << this->_melee_attack << " points of damage!\n";
    }
    else
        std::cout << "Not enought energy for " << this->_name << "\n";
    usleep(1045);  
}

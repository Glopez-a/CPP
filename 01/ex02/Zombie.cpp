# include "zombie.hpp"

zombie::zombie()
{
}

zombie::zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}

zombie::~zombie()
{
    std::cout << "Zombie " << this->_name << " go back home :(\n";
}

void    zombie::announce()
{
    std::cout << this->_name << " from The " << this->_type << " ready to fight\n";
}

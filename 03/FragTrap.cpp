# include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " go back home :(\n";
}

void    FragTrap::announce()
{
    std::cout << this->_name << " from The " << this->_type << " ready to fight\n";
}

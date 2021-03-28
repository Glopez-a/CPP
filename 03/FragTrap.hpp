#ifndef FRAGTRAP.HPP
# define FRAGTRAP.HPP

# include <iostream>
# include <string>

class   FragTrap
{
private:
    std::string _name;
public:
    FragTrap();
    FragTrap(std::string name, std::string type);
    ~FragTrap();
};
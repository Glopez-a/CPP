#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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
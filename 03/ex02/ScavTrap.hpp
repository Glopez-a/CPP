#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    static std::string _random_challengs[5];
    static std::string _challengs1;
    static std::string _challengs2;
    static std::string _challengs3;
    static std::string _challengs4;
    static std::string _challengs5;

public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void    challengeNewcomer(void);
};

#endif

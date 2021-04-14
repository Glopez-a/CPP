#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class   FragTrap: virtual public ClapTrap
{
private:
	FragTrap();

protected:
    static std::string _random_attacks[5];
    static std::string _at1;
    static std::string _at2;
    static std::string _at3;
    static std::string _at4;
    static std::string _at5;

public:
    FragTrap(std::string name);
    FragTrap(FragTrap const &other);
    ~FragTrap();
    FragTrap   &operator=(FragTrap const &other);
    void        rangedAttack(std::string const &target);
    void        meleeAttack(std::string const &target);
    void        vaulthunter_dot_exe(std::string const &target);
};

#endif

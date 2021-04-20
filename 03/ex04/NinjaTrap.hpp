#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class   NinjaTrap: public ClapTrap
{
private:
	NinjaTrap();

protected:
    static std::string _random_attacks[5];
    static std::string _attack1;
    static std::string _attack2;
    static std::string _attack3;
    static std::string _attack4;
    static std::string _attack5;

public:
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &other);
    ~NinjaTrap();
    NinjaTrap   &operator=(NinjaTrap const &other);
    void        rangedAttack(std::string const &target);
    void        meleeAttack(std::string const &target);
    void        ninjaShoebox(ClapTrap const &someone);
};

#endif

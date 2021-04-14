#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class   SuperTrap: virtual public FragTrap, public NinjaTrap
{
private:
	SuperTrap();

public:
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const &other);
    ~SuperTrap();
    SuperTrap   &operator=(SuperTrap const &other);
    void        rangedAttack(std::string const &target);
    void        meleeAttack(std::string const &target);
};

#endif

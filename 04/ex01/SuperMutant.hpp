#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <string>
# include <iostream>

class SuperMutant: public Enemy
{
private:
    int _hp;
    std::string _type;
public:
    SuperMutant();
    SuperMutant(SuperMutant const &supermutant);
    ~SuperMutant();
    SuperMutant &operator=(SuperMutant const &supermutant);
    int getHP(void) const;
    virtual void takeDamage(int damage);
};

#endif

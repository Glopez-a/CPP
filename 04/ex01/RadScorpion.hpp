#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <string>
# include <iostream>

class RadScorpion: public Enemy
{
private:
    int _hp;
    std::string _type;
public:
    RadScorpion();
    RadScorpion(RadScorpion const &RadScorpion);
    ~RadScorpion();
    RadScorpion &operator=(RadScorpion const &RadScorpion);
    int getHP(void) const;
    virtual void takeDamage(int damage);
};

#endif

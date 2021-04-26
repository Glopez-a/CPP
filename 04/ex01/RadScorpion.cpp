# include "RadScorpion.hpp"

RadScorpion::RadScorpion(): 
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &radscorpion):
    Enemy(radscorpion)
{
    *this = radscorpion;
}


RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}

RadScorpion   &RadScorpion::operator=(RadScorpion const &radscorpion)
{
    this->_hp = radscorpion._hp;
    this->_type = radscorpion._type;
    return (*this);
}

int RadScorpion::getHP(void) const
{
    return (this->_hp);
}

void    RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}


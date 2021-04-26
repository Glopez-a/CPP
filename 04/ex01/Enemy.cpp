# include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type):
    _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &enemy)
{
    *this = enemy;
}


Enemy::~Enemy()
{
}

Enemy   &Enemy::operator=(Enemy const &enemy)
{
    this->_hp = enemy._hp;
    this->_type = enemy._type;
    return (*this);
}

int Enemy::getHP(void) const
{
    return (this->_hp);
}

void    Enemy::takeDamage(int damage)
{
    this->_hp -= damage;
}


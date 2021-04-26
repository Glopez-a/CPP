#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
private:
    int _hp;
    std::string _type;
public:
    Enemy(int hp, std::string const &type);
    Enemy(Enemy const &Enemy);
    ~Enemy();
    Enemy &operator=(Enemy const &Enemy);
    int getHP(void) const;
    std::string getType() const;

    virtual void takeDamage(int damage);
};

#endif

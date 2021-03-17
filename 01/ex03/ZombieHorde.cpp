# include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int N)
{
    if (N <= 0)
        return;
    zombie *zomb = new zombie[N];
    for (int i = 0; i < N; i++)
        zomb[i].set_random_name();
    this->the_zombies = zomb;
}

ZombieHorde::~ZombieHorde()
{
    delete []this->the_zombies;
}

zombie  *ZombieHorde::newZombie(std::string name)
{
    return (new zombie(name));
}


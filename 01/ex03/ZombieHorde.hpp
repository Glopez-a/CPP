# include "Zombie.hpp"

class ZombieHorde
{
private:
    zombie  *the_zombies;
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    zombie  *newZombie(std::string name);
};

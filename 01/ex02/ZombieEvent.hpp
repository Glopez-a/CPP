#include "zombie.hpp"

class ZombieEvent
{
private:
    std::string _type;
public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    void    setZombieType(std::string type);
    zombie  *newZombie(std::string name);
    zombie  *randomChump();
};

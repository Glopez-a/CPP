# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
    this->_type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new zombie(name, this->_type));
}

zombie  *ZombieEvent::randomChump()
{
    char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char vowels[] = {'a','e','i','o','u','y'};
    struct timeval time; 
    gettimeofday(&time,NULL);

    std::string random_name = "";
    srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    int random = rand() % 2;
    int count = 0;

    for(int i = 0; i < 8; i++)
    {
        if(random < 2 && count < 2)
        {
            random_name = random_name + consonents[rand() % 19];
            count++;
        }
        else
        {
            random_name = random_name + vowels[rand() % 5];
            count = 0;
        }
        random = rand() % 2;
    }
    usleep(1236);
    zombie *the_zombie = newZombie(random_name);
    the_zombie->announce();
    return (the_zombie);
}
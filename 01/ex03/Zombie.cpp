# include "Zombie.hpp"

zombie::zombie()
{
}

zombie::zombie(std::string name)
{
    this->_name = name;
}

zombie::~zombie()
{
    std::cout << "Zombie " << this->_name << " go back home :(\n";
}

void	zombie::set_name(std::string name)
{
	this->_name = name;
}

void    zombie::set_random_name()
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
    this->_name = random_name;
    announce();
    usleep(1236);
}

void    zombie::announce()
{
    std::cout << this->_name << " ready to fight\n";
}

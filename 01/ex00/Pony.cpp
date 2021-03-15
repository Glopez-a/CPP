#include "Pony.hpp"

Pony::Pony(std::string str)
{
    this->name = str;
}

Pony::~Pony()
{
    std::cout << "ohh nooo," << this->name << "is diyng! :(\n";
}

void    Pony::fire_ball()
{
    std::cout << "FIRE BALL ATACK!\n";
}

void    Pony::shout()
{
    std::cout << this->name << " is the best!\n";
}

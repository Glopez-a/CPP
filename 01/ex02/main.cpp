# include <iostream>
# include <string>
# include <iomanip>
# include "ZombieEvent.hpp"

static void    the_first_event()
{
    ZombieEvent first_event;
    zombie      *firsts[4];

    first_event.setZombieType("First Generation");
    std::cout << "The first event starts.. \n";
    for (int i = 0; i < 4; i++)
        firsts[i] = first_event.randomChump();
    std::cout << "The first event finished.. \n";
    for (int i = 0; i < 4; i++)
        delete firsts[i];
}

static void    the_second_event()
{
    ZombieEvent second_event;
    zombie      *seconds[4];

    second_event.setZombieType("second Generation");
    std::cout << "The second event starts.. \n";
    for (int i = 0; i < 4; i++)
        seconds[i] = second_event.randomChump();
    std::cout << "The second event finished.. \n";
    for (int i = 0; i < 4; i++)
        delete seconds[i];
}

int main()
{
    the_first_event();
    the_second_event();
}
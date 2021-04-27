# include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(/* args */)
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
    (void)other;
    std::cout << "* teleports from space *" << std::endl;
 
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back...\n";
}

AssaultTerminator   &AssaultTerminator::operator=(AssaultTerminator const &other)
{
    (void)other;
    std::cout << "* teleports from space *" << std::endl;
    return (*this);
}

AssaultTerminator   *AssaultTerminator::clone() const
{
    AssaultTerminator *the_clone = new AssaultTerminator;
    return (the_clone);

}


void    AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void    AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *\n";
}

void    AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *\n";
}
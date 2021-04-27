# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(/* args */)
{
    std::cout <<  "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
    (void)other;
    std::cout <<  "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh...\n";
}

TacticalMarine   &TacticalMarine::operator=(TacticalMarine const &other)
{
    (void)other;
    std::cout <<  "Tactical Marine ready for battle!\n";
    return (*this);
}

TacticalMarine   *TacticalMarine::clone() const
{
    TacticalMarine *the_clone = new TacticalMarine;
    return (the_clone);

}


void    TacticalMarine::battleCry(void) const
{
    std::cout <<  "For the holy PLOT!\n";
}

void    TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *\n";
}

void    TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *\n";
}
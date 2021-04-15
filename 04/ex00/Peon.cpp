# include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const &other): Victim(other._name)
{
    std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
        std::cout << "Bleuark..\n";
}

Peon    &Peon::operator=(Peon const &other)
{
    std::cout << "Zog zog.\n";
    this->_name = other._name;
    return (*this);
}

std::string Peon::getName(void) const
{
    return (this->_name);
}

void        Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony!\n";
}


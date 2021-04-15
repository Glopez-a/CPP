# include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!\n";
}

Victim::Victim(Victim const &other)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!\n";
    *this = other;
}

Victim::~Victim()
{
        std::cout << "Victim " << this->_name << " just died for no apparent reason!\n";
}

Victim    &Victim::operator=(Victim const &other)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!\n";
    this->_name = other._name;
    return (*this);
}


std::string Victim::getName(void) const
{
    return (this->_name);
}

void        Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep!\n";
}

std::ostream    &operator<<(std::ostream &out, Victim const &Victim)
{
    out << "I'm " << Victim.getName() << " and I like otters!\n";
    return (out);
}

# include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &tittle): _name(name), _tittle(tittle)
{
    std::cout << this->_name << ", " << this->_tittle << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
    std::cout << this->_name << ", " << this->_tittle << ", is born!\n";
    *this = other;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_tittle << ", is dead. Consequences will never be the same!\n";
}

Sorcerer    &Sorcerer::operator=(Sorcerer const &other)
{
    std::cout << "Assignation called\n";
    this->_name = other._name;
    this->_tittle = other._tittle;
    return (*this);
}


std::string Sorcerer::getName(void) const
{
    return (this->_name);
}


std::string Sorcerer::getTittle(void) const
{
    return (this->_tittle);
}

void        Sorcerer::polymorph(Victim const &victima) const
{
    victima.getPolymorphed();
}

std::ostream    &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTittle()
        << ", and I like ponies!\n";
    return (out);
}

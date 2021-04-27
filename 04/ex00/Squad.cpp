# include "Squad.hpp"

Squad::Squad(/* args */): _units(0), _marines(NULL)
{
}

Squad::Squad(Squad const &other)
{
    *this = other;
}

Squad::~Squad()
{
    for (int i = 0; i < this->_units; i++)
        delete this->_marines[i];
    if (this->_units)
        delete this->_marines;
}

Squad   &Squad::operator=(Squad const &other)
{
    for (int i = 0; i < other._units; i++)
        delete _marines[i];
    if (other._marines)
        delete _marines;
    this->_marines = new ISpaceMarine*[other._units];
    for (int i = 0; i < other._units; i++)
        this->_marines[i] = other._marines[i]->clone();
    return (*this);
}

int     Squad::getCount() const
{
    return (this->_units);
}

ISpaceMarine    *Squad::getUnit(int i) const
{
    std::cout << _units << std::endl;
    if (i < 0 || this->_units == 0 || i >= this->_units)
        return (nullptr);
    return (this->_marines[i]);
}

int     Squad::push(ISpaceMarine *someone)
{
    if (!someone)
        return (this->_units);
    for (int i = 0; i < this->_units; i++)
    {
        if (this->_marines[i] == someone)
            return (this->_units);
    }
    ISpaceMarine **new_marines = new ISpaceMarine*[this->_units + 1];
    for (int i = 0; i < this->_units; i++)
        new_marines[i] = this->_marines[i];
    new_marines[this->_units] = someone;
    if (this->_units > 0)
        delete this->_marines;
    this->_units++;
    this->_marines = new_marines;
    return (this->_units);
}


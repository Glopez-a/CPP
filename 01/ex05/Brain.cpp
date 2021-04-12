# include "Brain.hpp"

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
    std::stringstream   address;
    address << this;
    return (address.str());
}
void            Brain::set_size(int size)
{
    this->_size = size;
}

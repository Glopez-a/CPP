# include "Brain.hpp"

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

std::string   Brain::identify()
{
    std::stringstream address;
    address << this;
    return (address.str());
}

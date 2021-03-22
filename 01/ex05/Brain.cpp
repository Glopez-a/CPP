# include "Brain.hpp"

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

unsigned long   *Brain::identify() const
{
    return ((unsigned long *)this);
}

void            Brain::set_size(int size)
{
    this->_size = size;
}

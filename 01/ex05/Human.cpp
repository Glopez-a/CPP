# include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

Brain const   &Human::getBrain() const
{
    return (this->_brain);
}

unsigned long   *Human::identify() const
{
    return (this->getBrain().identify());
}

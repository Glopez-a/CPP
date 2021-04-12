# include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

Brain const &Human::getBrain() const
{
    return (this->_brain);
}

std::string Human::identify() const
{
    return (this->getBrain().identify());
}


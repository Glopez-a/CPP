# include "Human.hpp"

Human::Human(/* args */)
{
}

Human::~Human()
{
}

Brain const &Human::getBrain()
{
    return (this->_brain);
}

std::string Human::identify()
{
    return (this->getBrain().identify());
}


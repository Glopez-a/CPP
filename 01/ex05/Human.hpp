# include "Brain.hpp"

class Human
{
private:
    Brain   _brain;
public:
    Human(/* args */);
    ~Human();
    std::string identify() const;
    Brain const &getBrain() const;
};

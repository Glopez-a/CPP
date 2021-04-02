# include "Brain.hpp"

class Human
{
private:
    Brain const   _brain;
public:
    Human(/* args */);
    ~Human();
    std::string identify();
    Brain const &getBrain();

};

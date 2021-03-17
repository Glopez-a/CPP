# include "Brain.hpp"

class Human
{
private:
    Brain const   _brain;
public:
    Human(/* args */);
    ~Human();
    unsigned long   *identify() const;
    Brain const     &getBrain() const;

};


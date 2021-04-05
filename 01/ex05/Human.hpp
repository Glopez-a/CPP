# include "Brain.hpp"

class Human
{
private:
    Brain   _brain;
public:
    Human(/* args */);
    ~Human();
<<<<<<< HEAD
    std::string identify();
    Brain const &getBrain();

=======
    unsigned long   *identify() const;
    Brain const     &getBrain() const;
>>>>>>> 85bef4e75e8a7f8039ae17f158475c3e8b34d745
};

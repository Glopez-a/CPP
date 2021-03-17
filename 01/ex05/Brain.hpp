# include <iostream>
# include <string>
# include <iomanip>
# include <unistd.h>
#include <sys/time.h>

class Brain
{
private:
    //std::string _name;
public:
    Brain(/* args */);
    ~Brain();
    unsigned long   *identify() const;
};

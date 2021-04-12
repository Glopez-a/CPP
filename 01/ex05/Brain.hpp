# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <unistd.h>
#include <sys/time.h>

class Brain
{
private:
    int _size;
public:
    Brain(/* args */);
    ~Brain();
    std::string     identify() const;
    void            set_size(int size);
};

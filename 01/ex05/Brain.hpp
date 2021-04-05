# include <iostream>
# include <string>
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
    unsigned long   *identify() const;
    void            set_size(int size);
};

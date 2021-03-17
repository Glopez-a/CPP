# include <iostream>
# include <string>
# include <iomanip>
# include <unistd.h>
#include <sys/time.h>

class zombie
{
private:
    std::string _name;
public:
    zombie();
    zombie(std::string name);
    ~zombie();
    void    set_name(std::string name);
    void    set_random_name();
    void    announce();
};


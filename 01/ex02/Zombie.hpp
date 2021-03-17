# include <iostream>
# include <string>
# include <iomanip>
# include <unistd.h>
#include <sys/time.h>

class zombie
{
private:
    std::string _name;
    std::string _type;
public:
    zombie();
    zombie(std::string name, std::string type);
    ~zombie();
    void    announce();
};


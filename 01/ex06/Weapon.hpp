#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <unistd.h>
#include <sys/time.h>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string  type);
    ~Weapon();
    std::string const   &getType() const;
    void                setType(std::string const &type);
};

#endif

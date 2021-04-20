#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
    std::string _name;
public:
    Victim(std::string const &name);
    Victim(Victim const &other);
    ~Victim();
    Victim      &operator=(Victim const &other);
    std::string getName(void) const;
    virtual void    getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &Victim);


#endif
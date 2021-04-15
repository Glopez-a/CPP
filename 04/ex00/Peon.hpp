#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
class Peon: public Victim
{
private:
    std::string _name;
public:
    Peon(std::string name);
    Peon(Peon const &other);
    ~Peon();
    Peon      &operator=(Peon const &other);
    std::string getName(void) const;
    void        getPolymorphed(void) const;
};

#endif
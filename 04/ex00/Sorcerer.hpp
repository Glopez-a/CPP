#ifndef SORCERER_HPP
# define SORCERER_HPP


# include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _tittle;
public:
    Sorcerer(std::string const &name, std::string const &tittle);
    Sorcerer(Sorcerer const &other);
    ~Sorcerer();
    Sorcerer    &operator=(Sorcerer const &other);
    std::string getName(void) const;
    std::string getTittle(void) const;
    void        polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);


#endif
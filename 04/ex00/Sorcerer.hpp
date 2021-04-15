#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class Sorcerer
{
private:
    std::string _name;
    std::string _tittle;
public:
    Sorcerer(std::string name, std::string tittle);
    Sorcerer(Sorcerer const &other);
    ~Sorcerer();
    Sorcerer    &operator=(Sorcerer const &other);
    std::string getName(void) const;
    std::string getTittle(void) const;

};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);


#endif
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
private:
    /* data */
public:
    AssaultTerminator(/* args */);
    AssaultTerminator(AssaultTerminator const &other);
    ~AssaultTerminator();
    AssaultTerminator   &operator=(AssaultTerminator const &other);
    AssaultTerminator   *clone() const;
    void    battleCry(void) const;
    void    rangedAttack(void) const;
    void    meleeAttack(void) const;
};

#endif
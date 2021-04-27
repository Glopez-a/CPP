#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
private:
    /* data */
public:
    TacticalMarine(/* args */);
    TacticalMarine(TacticalMarine const &other);
    ~TacticalMarine();
    TacticalMarine   &operator=(TacticalMarine const &other);
    TacticalMarine   *clone() const;
    void    battleCry(void) const;
    void    rangedAttack(void) const;
    void    meleeAttack(void) const;
};

#endif
#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
    int _units;
    ISpaceMarine    **_marines;
public:
    Squad(/* args */);
    Squad(Squad const &other);
    virtual ~Squad();
    Squad           &operator=(Squad const &other);
    int             getCount() const;
    ISpaceMarine   *getUnit(int i) const;
    int             push(ISpaceMarine *someone);
};

#endif

# include <iostream>
# include <string>
# include <iomanip>

class Pony
{
private:
    std::string name;
    std::string colour_hair;

public:
    Pony(std::string);
    ~Pony();
    void    fire_ball();
    void    shout();

};


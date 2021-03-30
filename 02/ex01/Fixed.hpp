#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
# include <istream>
# include <string>

class Fixed
{
private:
    int value;
    static const int    bits = 8;
public:
    Fixed(/* args */);
    Fixed(int const);
    Fixed(Fixed const &other);
    ~Fixed();
    Fixed   &operator=(Fixed const &other);
    Fixed   &operator<<(Fixed const &other);
    int     getRawBits() const;
    void    setRawBits(int const raw_bits);
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

#endif

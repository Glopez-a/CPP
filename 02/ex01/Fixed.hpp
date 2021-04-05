#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
# include <string>

class Fixed
{
private:
    int _value;
    static const int    _bits = 8;
public:
    Fixed(/* args */);
    Fixed(int const value);
    Fixed(float const value);
    Fixed(Fixed const &other);
    ~Fixed();
    Fixed   &operator=(Fixed const &other);
    int     getRawBits() const;
    void    setRawBits(int const raw_bits);
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &out, Fixed const &value);
#endif

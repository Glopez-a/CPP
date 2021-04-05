# include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructor called\n";
    this->_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}


Fixed::Fixed(int const value)
{
    std::cout << "Int contructor called\n";
    this->_value = value * 256;
}


Fixed::Fixed(float const value)
{
    std::cout << "Float contructor called\n";
    this->_value = roundf(value * (256));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called:\n";
}

Fixed   &Fixed::operator=(Fixed const &other)
{
    std::cout << "Assignation operator called\n";
    this->_value = other._value;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (this->_value);
}

float   Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(256));
}

int     Fixed::toInt(void) const
{
    return ((float)this->_value / (float)(256));
}

void   Fixed::setRawBits(int const raw_bits)
{
    std::cout << "setRawBits:\n";
    this->_value = raw_bits;
}
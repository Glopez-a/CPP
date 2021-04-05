# include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
    std::cout << "Default constructor called\n";
    this->_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    this->_value = copy.getRawBits();
}


Fixed::~Fixed()
{
    std::cout << "Destructor called:\n";
}

Fixed   &Fixed::operator=(Fixed const &other)
{
    std::cout << "Assignation operator called\n";
    this->_value = other.getRawBits();
    return (*this);
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (this->_value);
}

void    Fixed::setRawBits(int const raw_bits)
{
    std::cout << "setRawBits:\n";
    this->_value = raw_bits;
}
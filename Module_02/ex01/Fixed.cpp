#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator = (const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = copy.getRawBits();
    return (*this);
}
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

Fixed::Fixed(const int int_number)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = int_number << this->BITS;
}

Fixed::Fixed(const float float_number)
{
    int power = 1 << this->BITS;

    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(float_number * power);
}

int Fixed::toInt(void) const
{
    return (this->value >> this->BITS);
}

float   Fixed::toFloat(void) const
{
    int power = 1 << this->BITS;
    float float_number = (float)this->value / power;

    return (float_number);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}
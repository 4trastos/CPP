/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:45:42 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/10 17:36:38 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int	int_number)
{
	this->value = int_number << this->FRACT_BITS;
}

Fixed::Fixed(const float float_number)
{
	int	power = 1 << this->FRACT_BITS;
	this->value = roundf(float_number * power);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

int Fixed::toInt(void) const
{
    return (this->value >> this->FRACT_BITS);
}

float   Fixed::toFloat(void) const
{
    int power = 1 << this->FRACT_BITS;
    float float_number = (float)this->value / power;

    return (float_number);
}

Fixed& Fixed::operator = (const Fixed& copy)
{
	this->value = copy.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& d) const
{
	return (this->value > d.getRawBits());
}

bool	Fixed::operator<(const Fixed& d) const
{
	return (this->value < d.getRawBits());
}

bool	Fixed::operator>=(const Fixed& d) const
{
	return (this->value >= d.getRawBits());
}

bool	Fixed::operator<=(const Fixed& d) const
{
	return (this->value <= d.getRawBits());
}

bool	Fixed::operator==(const Fixed& d) const
{
	return (this->value == d.getRawBits());
}

bool	Fixed::operator!=(const Fixed& d) const
{
	return (this->value != d.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& d)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + d.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed& d)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - d.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& d)
{
	Fixed res;

	int	power = 1 << this->FRACT_BITS;
	res.setRawBits(this->toFloat() * d.toFloat() * power);
	return (res);
}

Fixed	Fixed::operator/(const Fixed& d)
{
	Fixed	res;

	int	power = 1 << this->FRACT_BITS;
	res.setRawBits(this->toFloat() / d.toFloat() * power);
	return (res);
}

Fixed&	Fixed::operator++()
{
	++this->value;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	--this->value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	++(*this);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	--(*this);
	return (temp);
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed&	Fixed::min(Fixed& value1, Fixed& value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

const Fixed&	Fixed::min(const Fixed& value1, const Fixed& value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed& Fixed::max(Fixed& value1, Fixed& value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

const Fixed& Fixed::max(const Fixed& value1, const Fixed& value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);	
}
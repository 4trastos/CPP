/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:20:29 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/03 16:41:37 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed::Fixed(const int int_number)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_number << this->FRACT_BITS;
}

Fixed::Fixed(const float float_number)
{
	int power = 1 << this->FRACT_BITS;
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_number * power);
}

float Fixed::toFloat(void) const
{
	int power = 1 << this->FRACT_BITS;
	float float_number = (float)this->value / power;
	return (float_number); 	
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->FRACT_BITS);
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarPrint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:35:45 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/04 18:05:00 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::printChar(double value)
{
	std::cout << "char: ";
	 if (std::isnan(value) || std::isinf(value) ||
        value < std::numeric_limits<char>::min() || 
        value > std::numeric_limits<char>::max())
    {
        std::cout << "impossible" << std::endl;
        return;
    }
	char c = static_cast<char>(value);
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << " Non displayed " << std::endl;
}

void	ScalarConverter::printInt(double value)
{
	std::cout << "int: ";
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() ||
		std::isnan(value))
		std::cout << "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(value);
		std::cout << i << std::endl;
	}
}

void	ScalarConverter::printFloat(double value)
{
	std::cout << "float: ";
	float f = static_cast<float>(value);
	if (std::isnan(f))
		std::cout << "nanf" << std::endl;
	else if (std::isinf(f))
	{
		if (f > 0)
			std::cout << "+inff" << std::endl;
		else
			std::cout << "-inff" << std::endl;	
	}
	else
		std::cout << std::fixed << std::setprecision((f - static_cast<int>(f)) != 0 ? 1 : 0) << f << ".0f" << std::endl;
}

void	ScalarConverter::printDouble(double value)
{
	std::cout << "double: ";
	if (std::isnan(value))
		std::cout << "nan" << std::endl;
	else if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "+inf" << std::endl;
		else
			std::cout << "-inf" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision((value - static_cast<int>(value) != 0 ? 1 : 0)) << value  << ".0" << std::endl;
}
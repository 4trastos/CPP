/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarPrint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:35:45 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 19:02:50 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	countDecimals(std::string str)
{
	std::size_t poinPos = str.find('.');
	if (poinPos == std::string::npos)
		return (0);
	
	int count = str.length() - poinPos -1;
	
	return (count);
}

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

void	ScalarConverter::printFloat(std::string const& literal)
{
	std::cout << "float: ";
	double s = atof(literal.c_str());
	float f = static_cast<float>(s);
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
	{
		std::cout << std::fixed;
		int decimals = countDecimals(literal);
		if (decimals > 8)
			decimals = 8;
		std::cout << std::setprecision(decimals);
		std::cout << f;
		if (decimals == 0)
			std::cout << ".0f";
		else
			std::cout << "f";
		std::cout << std::endl;
	}
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
	{
		std::cout << std::fixed;
		if ((value - static_cast<int>(value)) != 0)
			std::cout << std::setprecision(2);
		else
			std::cout << std::setprecision(0);
		std::cout << value;
		if (value - static_cast<int>(value) == 0)
			std::cout << ".0";
	}
	std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:33:22 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/04 18:31:49 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	return (*this);
}

void ScalarConverter::convert(std::string const& literal)
{
	int flag = 0;
	if (literal != "nanf" && literal != "inff" && literal != "-inff")
		literal.substr(0, literal.length() - 1);
	if ((literal.c_str()[0] < '0' || literal.c_str()[0] > '9') && literal != "nan" &&
			literal != "inf" && literal != "-inf" && literal != "nanf" && literal != "inff"
			&& literal != "-inff" && literal.length() > 1)
		std::cout << "Error: Not valid string" << std::endl;
	if (literal.length() == 1 && isprint(literal[0]) && (literal.c_str()[0] < '0' || literal.c_str()[0] >= '9'))
		flag = 1;
	double s = atof(literal.c_str());
	if (flag == 1)
	{
		char c = literal.c_str()[0];
		printChar(c);
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" <<  std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
	{
		printChar(s);
		printInt(s);
		printFloat(s);
		printDouble(s);
	}
}
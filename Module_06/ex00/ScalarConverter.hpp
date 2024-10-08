/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:33:19 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/08 08:51:03 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>
# include <limits>
# include <cmath>
# include <cctype>
# include <cerrno>

class ScalarConverter
{
	private:
		ScalarConverter(){};
		ScalarConverter(const ScalarConverter& copy){};
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter(){};

		static void printChar(double value);
		static void printInt(double value);
		static void printFloat(std::string const& literal);
		static void printDouble(std::string const& literal);

	public:
		static void convert(const std::string& literal);
};

#endif
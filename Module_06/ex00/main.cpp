/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:32:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/03 12:18:41 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please: ./convert <literal>" << std::endl;
		return (0);
	}
	std::string literal = argv[1];
	ScalarConverter::convert(literal);
	/* ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("2.5f");
	std::cout << std::endl;
	ScalarConverter::convert("2.3456787678");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inff"); */
	return (0);
}
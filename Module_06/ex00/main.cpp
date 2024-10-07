/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:32:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/04 18:37:50 by davgalle         ###   ########.fr       */
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
	return (0);
}
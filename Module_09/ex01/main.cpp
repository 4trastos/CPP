/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:07:35 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 11:01:06 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: error: perform an operation" << std::endl;
		return (1);
	}

	std::string expresion = argv[1];
	RPN			calculator;

	if (!calculator.evaluateRPN(expresion))
		return (1);
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:34:35 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 14:18:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
	{
		std::string str = "HI THIS IS BRAIN";
		std::string *stringPTR = &str;
		std::string &stringREF = str;

		std::cout << "The memory address of the string    :" << &str << std::endl;
		std::cout << "The memory address of the stringPTR :" << stringPTR << std::endl;
		std::cout << "The memory address of the stringREF :" << &stringREF << std::endl;
		std::cout << std::endl;

		std::cout << "The value of the string             :" << str << std::endl;
		std::cout << "The value pointed to by stringPTR   :" << *stringPTR << std::endl;
		std::cout << "The value pointed to by stringREF   :" << stringREF << std::endl;
	}
	else
		std::cout << "This program does not need arguments" << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:34:35 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/19 12:53:48 by davgalle         ###   ########.fr       */
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
		std::string line = "HI THIS IS BRAIN";
		std::string *stringPTR = &line;
		std::string &stringREF = line;

		std::cout << "The memory address of the string\n";
		std::cout << &line << std::endl;

		std::cout << "The memory address stringPTR\n";
		std::cout << stringPTR << std::endl;

		std::cout << "The memory address stringREF\n";
		std::cout << &stringREF << std::endl;

		std::cout << "The value of string\n";
		std::cout << line << std::endl;

		std::cout << "The value of stringPTR\n";
		std::cout << *stringPTR << std::endl;

		std::cout << "The value of stringREF\n";
		std::cout << stringREF << std::endl;
	}
	else
		std::cout << "This program does not need arguments" << std::endl;
	return (0);
}
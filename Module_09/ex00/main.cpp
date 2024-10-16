/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:45:31 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/16 13:19:32 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	std::string filename = argv[1];

	BitcoinExchange btc;
	
	if (!btc.ParseFile(filename))
	{
		std::cout << "Error: file does not have a .txt extension." << std::endl;
		return (1);
	}
	
	btc.OpenProntf(filename);
	
	return (0);
}
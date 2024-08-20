/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:59:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 16:20:18 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

void	replace(std::string file, std::string s1, std::string s2)
{
	
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong input, use -> ./replace file s1 s2" << std::endl;
	else
		replace(argv[1], argv[2], argv[3]);
	return (0);
}

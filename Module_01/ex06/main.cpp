/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:54:29 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/21 13:47:55 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Wrong input. Please use -> ./harlFilter \"WARNING\"" << std::endl;
	else
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	return (0);
}
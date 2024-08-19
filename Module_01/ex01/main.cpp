/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/19 12:31:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *zombieArmy = zombieHorde(8, "Zombie");
	(void)argv;
	if (argc == 1)
	{
		for (int i = 0; i < 8; i++)
			zombieArmy[i].announce();
		delete[] zombieArmy;
	}
	else
		std::cout << "This program does not need arguments" << std::endl;
	return (0);
}
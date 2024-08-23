/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/23 13:52:52 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argv;

	if (argc != 1)
	{
		std::cout << "This program does not need arguments" << std::endl;
		return (1);
	}
	Zombie* armyZombie = zombieHorde(6, "I am a Zombie");
	
	for (int i = 0; i < 6; i++)
		armyZombie[i].announce();

	delete[] armyZombie;
	return (0);
}
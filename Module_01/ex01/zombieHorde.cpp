/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:51:20 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 13:57:26 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombieLegio = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string newZombie = name;
		zombieLegio[i].setName(newZombie);
	}
	return (zombieLegio);
}
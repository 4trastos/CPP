/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:17 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/23 12:19:21 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
	{
		Zombie foo("Foo");
		foo.announce();

		Zombie* memo = newZombie("Memo");
		memo->announce();
		delete(memo);

		randomChump("Random");
	}
	else
		std::cout << "This program does not need arguments" << std::endl;
	return (0);
}
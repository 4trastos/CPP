/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/19 13:28:38 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.cpp"

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
	{
		{
			Weapon club = Weapon("crude spiked club");

			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			Weapon club = Weapon("crude spiked club");

			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
	}
	else
		std::cout << "This programa does not need arguments" << std::endl;
	return (0);
}
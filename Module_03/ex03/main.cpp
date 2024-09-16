/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:54:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/16 10:42:06 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap someTrap("Monster");

	someTrap.TrapStatus();
	someTrap.attack("Perro Sansse");
	someTrap.TrapStatus();

	someTrap.takeDamage(50);
	someTrap.TrapStatus();

	someTrap.beRepaired(10);
	someTrap.TrapStatus();

	someTrap.takeDamage(30);
	someTrap.TrapStatus();

	someTrap.guardGate();
	someTrap.highFivesGuys();
	someTrap.guardGate();

	someTrap.whoAmI();

	return (0);
}
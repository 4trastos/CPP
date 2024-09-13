/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:11:39 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 15:12:52 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trap("Mike");
	
	trap.TrapStatus();
	trap.attack("Bob");

	trap.TrapStatus();
	trap.takeDamage(6);
	trap.TrapStatus();

	trap.beRepaired(3);
	trap.TrapStatus();

	trap.attack("John");
	trap.takeDamage(15);

	return (0);
}
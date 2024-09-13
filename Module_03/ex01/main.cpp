/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:15:38 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 18:21:27 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	someTrap("Billy_The_Kid");
	
	someTrap.TrapStatus();
	someTrap.attack("John Connor");
	someTrap.TrapStatus();

	someTrap.takeDamage(50);
	someTrap.TrapStatus();

	someTrap.beRepaired(20);
	someTrap.TrapStatus();

	someTrap.guardGate();
	someTrap.takeDamage(15);
	someTrap.TrapStatus();

	someTrap.guardGate();
	someTrap.takeDamage(15);
	someTrap.TrapStatus();

	return (0);
}
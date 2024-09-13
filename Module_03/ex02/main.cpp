/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:31:29 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 19:02:13 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap someTrap("Billy Joe");

	someTrap.TrapStatus();
	someTrap.attack("Charlie Partana");
	someTrap.TrapStatus();

	someTrap.takeDamage(50);
	someTrap.TrapStatus();

	someTrap.beRepaired(10);
	someTrap.TrapStatus();

	someTrap.takeDamage(30);
	someTrap.TrapStatus();

	someTrap.highFivesGuys();

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:11:39 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/11 15:29:53 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap someTrap("Mike");

	someTrap.clapStat();
	someTrap.attack("Peter");

	someTrap.takeDamage(5);
	someTrap.clapStat();

	someTrap.beRepaired(2);
	someTrap.clapStat();

	someTrap.takeDamage(15);
	return (0);
}
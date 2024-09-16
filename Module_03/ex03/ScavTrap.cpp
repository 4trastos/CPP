/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:54:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/16 09:54:15 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->gate = 0;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = copy;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "Asigned ScavTrap operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
	{
		std::cout << "ScavTrap " << this->name << " cannto attack to " << target;
		std::cout << " don´t have energy points" << std::endl;
	}
	else
	{
		(this->energy_points)--;
		std::cout << "ScavTrap " << this->name << " attacks ";
		std::cout << target << " causing ";
		std::cout << this->attack_damage << " points of damege" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->gate == 0)
	{
		(this->gate)++;
		std::cout << "ScavTrap " << this->name << " now in Gate keeper mode." << std::endl;
	}
	else
	{
		(this->gate)--;
		std::cout << "ScavTrap " << this->name << " off Gate keeper mode." << std::endl;
	}
}
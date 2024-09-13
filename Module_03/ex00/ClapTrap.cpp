/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:11:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 15:12:29 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor Default Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor String Called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy Constuctor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Asigned operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " cannto attack to " << target;
		std::cout << " don´t have energy points" << std::endl;
	}
	
	else
	{
		(this->energy_points)--;
		std::cout << "ClapTrap " << this->name << " attacks ";
		std::cout << target << " causing ";
		std::cout << this->attack_damage << " points of damege" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points = this->hit_points - amount;
	if (this->hit_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage " << std::endl;
		std::cout << "ClapTrap " << this->name << " died " << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points < 1)
		std::cout << "ClapTrap " << this->name << " have not energy points " << std::endl;
	else
	{
		(this->energy_points)--;
		this->hit_points = this->hit_points + amount;
		std::cout << "ClaTrap " << this->name << " repair " << amount << std::endl;
	}
}

void	ClapTrap::TrapStatus()
{
	std::cout << this->name << " | ";
	std::cout << "HP: " << this->hit_points << " | ";
	std::cout << "EP: " << this->energy_points << " | ";
	std::cout << "AD: " << this->attack_damage << " | " << std::endl;
}

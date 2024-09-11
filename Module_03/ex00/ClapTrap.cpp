/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:11:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/11 16:13:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor Default called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;	
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "Constructor String Called" << std::endl;
	this->name = str;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return(*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
		std::cout << "ClapTrap " << this->name << " don't have energy" << std::endl;
	else
	{
		(this->energy_points)--;
		std::cout << "ClapTrap " << this->name << " atacks ";
		std::cout << target << " ,causing " << this->attack_damage;
		std::cout << " points of damage " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points = this->hit_points - amount;
	if (this->hit_points < 0)
		std::cout << "ClapTrap " << this->name << " died " << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points < 1)
		std::cout << "ClapTratp " << this->name << " don't have energy" << std::endl;
	else
	{
		(this->energy_points)--;
		this->hit_points = this->hit_points + amount;
		std::cout << "ClapTrap " << this->name << " repair " << amount << std::endl;
	}
}

void	ClapTrap::clapStat()
{
	std::cout << this->name << " | ";
	std::cout << "HP: " << this->hit_points << " | ";
	std::cout << "EP: " << this->hit_points << " | ";
	std::cout << "AD: " << this->hit_points << " | " << std::endl; 
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:31:43 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 18:52:33 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Construtor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Contructor String called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrag Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "FragTrap Asigned operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->attack_damage = copy.attack_damage;
	this->energy_points = copy.energy_points;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
		
}
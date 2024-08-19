/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:04:17 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/19 13:26:35 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string imput)
{
	this->type = imput;
}

Weapon::~Weapon()
{
	return;
}

void	Weapon::setType(std::string imput)
{
	this->type = imput;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
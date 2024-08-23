/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:42 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/23 12:18:20 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 
 Zombie::Zombie(std::string str)
 {
	this->name = str;
 }

 Zombie::~Zombie()
 {
	std::cout << this->name << " return in grave" << std::endl;
 }

 void	Zombie::announce()
 {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
 }
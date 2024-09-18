/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:22:34 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 16:32:08 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal Default Called" << std::endl;
	this->type = "NaN";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destuctor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor WrongAnimal String Called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Constructor copy WrongAnimal called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "Asidgned Operator WrongAnimal called" << std::endl;
	this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType()
{
	std::cout << "WrongAnimal GetType called" << std::endl;
	return (this->type);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "Buuuuuuuu!!!!" << std::endl;
}
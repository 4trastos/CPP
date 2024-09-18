/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:58:06 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 18:07:25 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Animal Default called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Constructor Animla String called" << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal Copy called" << std::endl;
	*this = copy;
}

Animal&	Animal::operator=(const Animal& copy)
{
	std::cout << "Operator Animal called" << std::endl;
	this->type = copy.type;
	return (*this);	
}

std::string Animal::getType(void)
{
	std::cout << "Animal get called" << std::endl;
	return (this->type);
}

void	Animal::makeSound()const
{
	std::cout << "Grrrrrr!!!  Grrrrrr!!" << std::endl;
}
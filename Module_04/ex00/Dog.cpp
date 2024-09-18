/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:02:01 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 15:58:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Dog Standar called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(std::string type)
{
	std::cout << "Constructor Dog String called" << std::endl;
	type = "Dog";
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Operator Asigned Dog called" << std::endl;
	this->type = copy.type;
	return (*this);
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog called" << std::endl;
	*this = copy;
}

void	Dog::makeSound()
{
	std::cout << "Guauuuu Guauuuuu!!!" << std::endl;
}
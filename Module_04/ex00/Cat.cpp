/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:56:15 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 15:57:44 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat Defautl called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(std::string type)
{
	std::cout << "Constructor Cat string called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Asigned Operator Cat called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "Miauuu Miauuuu!!!" << std::endl;
}
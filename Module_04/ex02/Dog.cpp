/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:02:01 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 18:07:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Dog Standar called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete (this->brain);
}

Dog::Dog(std::string type)
{
	std::cout << "Constructor Dog String called" << std::endl;
	type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog called" << std::endl;
	if (copy.brain)
	{
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	*this = copy;
}
Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Operator Asigned Dog called" << std::endl;
	if (this == &copy)
		return (*this);
	delete [] this->brain;
	if (copy.brain)
	{
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	
	this->type = copy.type;
	return (*this);
}


void	Dog::makeSound()const
{
	std::cout << "Guauuuu Guauuuuu!!!" << std::endl;
}
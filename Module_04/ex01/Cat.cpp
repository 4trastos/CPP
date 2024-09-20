/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:56:15 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 11:59:00 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat Defautl called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete (this->brain);
}

Cat::Cat(std::string type)
{
	std::cout << "Constructor Cat string called" << std::endl;
	type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy called" << std::endl;
	if (copy.brain)
	{
		this->brain = new Brain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = NULL;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Asigned Operator Cat called" << std::endl;
	if (this == &copy)
		return (*this);
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

void	Cat::makeSound()const
{
	std::cout << "Miauuu Miauuuu!!!" << std::endl;
}

std::string Cat::getBrainIdea(int index) const
{
	return (this->brain->getIdea(index));
}

void Cat::setBrainIdea(int index, const std::string& idea)
{
	this->brain->setIdea(index, idea);
}
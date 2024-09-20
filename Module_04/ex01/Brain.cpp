/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:42:48 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/19 16:59:00 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain default called"	<< std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Constructor copy Brain called" << std::endl;
	*this = copy;
}

Brain&	Brain::operator=(const Brain& copy)
{
	std::cout << "Assigned oprator Brain called" << std::endl;
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index)
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return "";
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
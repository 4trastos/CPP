/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:22:30 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/19 14:10:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor WrongCat default called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "Constructor WrongCat String  called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "Constructor Copy WrongCat called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "Operator Assigned WrongCat called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void	WrongCat::makeSound()const
{
	std:: cout << "Rrrrrrrr Rrrrrrr Rrrrrr" << std::endl;
}

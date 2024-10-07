/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:39:22 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 13:24:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
	std::cout << "Constructor Serializer called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Destructor Seralizar called" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
	std::cout << "Copy Serializar called" << std::endl;
	*this = copy;
}

Serializer& Serializer::operator=(const Serializer& copy)
{
	std::cout << "Operator Serializer called" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

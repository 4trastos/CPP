/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:32:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 15:38:10 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	Base* ptr = Serializer::generate();

	std::cout << "Identifying using pointer: " << std::endl;
	Serializer::identify(ptr);

	std::cout << "Identifying using reference: " << std::endl;
	Serializer::identify(*ptr);

	delete ptr;
	return (0);
}
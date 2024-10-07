/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:32:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 16:55:30 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(time(0));
	Base* ptr = generate();

	std::cout << "Identifying using pointer: " << std::endl;
	identify(ptr);
	delete ptr;

	Base* ptr2 = generate();
	std::cout << "Identifying using reference: " << std::endl;
	identify(*ptr2);
	delete ptr2;

	return (0);
}
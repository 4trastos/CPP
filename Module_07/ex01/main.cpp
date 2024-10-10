/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:05:17 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/10 18:42:14 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Fixed.hpp"

void toUpper(char& c)
{
	if (isalpha(c) && c >= 'a' && c <= 'z')
		c = c - 32;
}

void addOne(int& i)
{
	i++;
}

void addOne(Fixed& i)
{
	i++;
}

int main()
{
	int test[] = {1, 2, 45, 32, 234324, 12, 13, 32};
	char tab[] = "Hola mundo!";

	::iter(test, 7, ft_printf);
	std::cout << "*********************************" << std::endl;

	::iter(test, 7, addOne);
	::iter(test, 7, ft_printf);
	std::cout << "*********************************" << std::endl;

	::iter(tab, 12, ft_printf);
	::iter(tab, 12, toUpper);
	std::cout << "*********************************" << std::endl;

    ::iter(tab, 12, ft_printf);
	std::cout << std::endl;

	std::cout << "======== CHECK CLASS ==========" << std::endl;

	Fixed fx[] = {1, 2, 3, 4, 5};
	::iter(fx, 5, ft_printf);
	::iter(fx, 5, addOne);
	::iter(fx, 5, ft_printf);

	return (0);
}
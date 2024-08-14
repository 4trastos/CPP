/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:07:50 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/13 13:26:31 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string prontf;
	PhoneBook	book;
	int			flag = 0;

	while (flag == 0)
	{
		std::cout << "Enter command -> ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, prontf);
		if (prontf == "ADD")
			book.Add();
		else if (prontf == "SEARCH")
			book.Search();
		else if (prontf == "EXIT")
			flag = 1;
		else
			std::cout << "Wrong Command" << std::endl;
	}
	return (0);
}

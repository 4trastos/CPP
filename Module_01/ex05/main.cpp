/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:54:29 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/21 13:23:48 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	Harl message;

	if (argc == 1)
	{
		message.complain("DEBUG");
		message.complain("INFO");
		message.complain("WARNING");
		message.complain("ERROR");
	}
	else
		std::cout << "This program does not need arguments" << std::endl;
	return (0);
}

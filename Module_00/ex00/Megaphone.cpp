/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/09 17:26:35 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

int	main(int argc, char **argv)
{
	std::string str;
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE 😏 *" << std::endl;
	else
	{
		i = 1;
		while (argv[i] != NULL)
		{
			j = 0;
			str = argv[i];
			while (str[j] != '\0')
			{
				str[j] = toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
		}		
	}
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:40:53 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 12:42:53 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie(std::string name);
		~Zombie();
	
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

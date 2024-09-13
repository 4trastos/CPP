/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:16:41 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 17:49:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <iomanip>

class ClapTrap
{
	protected:
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
		
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();

		ClapTrap(std::string name);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		void	TrapStatus();
};

# endif
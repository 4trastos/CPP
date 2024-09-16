/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:57:11 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/16 10:25:54 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator = (const DiamondTrap& copy);
		~DiamondTrap();

		DiamondTrap(std::string name);

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif
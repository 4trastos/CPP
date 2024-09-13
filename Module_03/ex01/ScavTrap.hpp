/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:17:11 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/13 17:46:16 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		int	gate; 
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);
		~ScavTrap();

		ScavTrap(std::string name);

		void	attack(const std::string& target);
		void 	guardGate();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:05:30 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 14:43:47 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon 		*weapon;
		
	public:
		HumanB(std::string name);
		~HumanB();

		void attack();

		void setWeapon(Weapon& weapon);
		
		Weapon& getWeapon();
};

#endif
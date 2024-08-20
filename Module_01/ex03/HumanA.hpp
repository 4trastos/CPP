/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:05:19 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 14:33:03 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon 		&weapon;
		std::string name;
		
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void attack();
		Weapon& getWeapon();
};

#endif
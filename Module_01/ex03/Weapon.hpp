/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:05:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/19 13:33:13 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPOON_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon(std::string type);
		~Weapon();

		void	setType(std::string str);

		std::string getType(void);
};

#endif
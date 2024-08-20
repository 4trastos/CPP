/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:05:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/20 15:47:16 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

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

		void	setType(const std::string& type);

		const std::string& getType(void);
};

#endif
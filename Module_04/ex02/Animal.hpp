/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:58:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/19 14:29:56 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(std::string type);
		Animal(const Animal& copy);
	
	public:
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
		std::string	getType(void);
		virtual void makeSound()const;

};
;

#endif

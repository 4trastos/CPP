/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:22:24 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 16:31:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& copy);
		~WrongCat();

		WrongCat(std::string type);

		void	makeSound()const;
};

#endif
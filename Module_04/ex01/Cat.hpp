/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:57:17 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 16:48:19 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();

		Cat(std::string type);

		virtual void makeSound() const;
};

#endif
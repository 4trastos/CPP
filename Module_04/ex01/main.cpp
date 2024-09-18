/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 16:44:35 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " say: " << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << " say: " << std::endl;
	i->makeSound();
	std::cout << meta->getType() << " say: " << std::endl;
	meta->makeSound();
	

	delete (i);
	delete (j);
	delete (meta);

	WrongAnimal* duck = new WrongCat();

	std::cout << duck->getType() << " say: ";
	duck->makeSound();

	delete duck;
	
	return (0);
}
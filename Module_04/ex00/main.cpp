/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 13:46:52 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--------------Constructors--------------\n" << std::endl;
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << "\n**********************************\n" << std::endl;
	std::cout << j->getType() << " say: " << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << " say: " << std::endl;
	i->makeSound();
	std::cout << meta->getType() << " say: " << std::endl;
	meta->makeSound();
	std::cout << "\n**********************************\n" << std::endl;
	std::cout << "--------------Destructors--------------\n" << std::endl;
	delete (i);
	delete (j);
	delete (meta);

	std::cout << "--------------Constructors--------------\n" << std::endl;
	WrongAnimal* duck = new WrongCat();

	std::cout << duck->getType() << " say: ";
	duck->makeSound();
	std::cout << "--------------Destructors--------------\n" << std::endl;
	delete duck;
	
	return (0);
}
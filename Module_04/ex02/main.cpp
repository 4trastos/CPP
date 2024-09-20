/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 14:13:15 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

/* int main()
{
	//Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " say: " << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << " say: " << std::endl;
	i->makeSound();
	//std::cout << meta->getType() << " say: " << std::endl;
	//meta->makeSound();
	

	delete (i);
	delete (j);
	// delete (meta);

	WrongAnimal* duck = new WrongCat();

	std::cout << duck->getType() << " say: ";
	duck->makeSound();

	delete duck;
	
	return (0);
} */

int main()
{
    std::cout << "--------------Constructors--------------\n" << std::endl;
    Dog test;
    test.setBrainIdea(0, "Cazar un ratón");

    Dog second(test);
    
    std::cout << "\n**********************************\n" << std::endl;
    std::cout << "Idea de test: " << test.getBrainIdea(0) << std::endl;
    std::cout << "Idea de second: "<< second.getBrainIdea(0) << std::endl;
    std::cout << "\n" << std::endl;

    std::cout << "Dirección de memoria de test: " << &test << std::endl;
    std::cout << "Dirección de memoria de brain en test: " << test.getBrainAddress() << std::endl;
    std::cout << "Dirección de memoria de second: " << &second << std::endl;
    std::cout << "Dirección de memoria de brain en second: " << second.getBrainAddress() << std::endl;
    std::cout << "\n**********************************\n" << std::endl;

    std::cout << "--------------Destructors--------------\n" << std::endl;
    
    return 0;
}
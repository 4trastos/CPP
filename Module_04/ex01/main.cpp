/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 14:42:20 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

/* int main()
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
} */

int main()
{

    std::cout << "--------------Constructors--------------\n" << std::endl;
    Dog test;
    test.setBrainIdea(10, "Cazar un ratón");

    Dog second(test);
    
    std::cout << "\n**********************************\n" << std::endl;
    std::cout << "Idea de test: " << test.getBrainIdea(10) << std::endl;
    std::cout << "Idea de second: "<< second.getBrainIdea(10) << std::endl;
    std::cout << "\n" << std::endl;

    std::cout << "Dirección de memoria de test: " << &test << std::endl;
    std::cout << "Dirección de memoria de brain en test: " << test.getBrainAddress() << std::endl;
    std::cout << "Dirección de memoria de second: " << &second << std::endl;
    std::cout << "Dirección de memoria de brain en second: " << second.getBrainAddress() << std::endl;
    std::cout << "\n**********************************\n" << std::endl;

    std::cout << "--------------Destructors--------------\n" << std::endl;
	
	/* std::cout << "\n============= TEST SUBJECT ==========\n" << std::endl;
	std::cout << "--------------Constructors--------------\n" << std::endl;
 
	Animal* animals[10];
	int			numb = 6;
	for (int i = 0; i < numb; i++)
	{
		std::cout << "__________"<< std::endl;
		std::cout << "value: " << i + 1 << std::endl;
		if (i < (numb / 2))
		{
			animals[i] = new Cat();
			std::cout << animals[i]->getType() << " say: " << std::endl;
			animals[i]->makeSound();
		}
		else
		{
			animals[i] = new Dog();
			std::cout << animals[i]->getType() << " say: " << std::endl;
			animals[i]->makeSound();
		}
		std::cout << "__________"<< std::endl;
	}
	std::cout << "--------------Destructors--------------" << std::endl;
	for (int i = 0; i < numb; i++)
	{
		std::cout << "__________"<< std::endl;
		std::cout << "value: " << i + 1 << std::endl;
		delete animals[i];
		std::cout << "__________"<< std::endl;
	}
 */
    return 0;
}

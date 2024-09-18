/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/18 18:10:59 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

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
	//delete (meta);

	//WrongAnimal* duck = new WrongCat();

	//std::cout << duck->getType() << " say: ";
	//duck->makeSound();

	//delete duck;
	
	return (0);
} */

int main()
{
    const int numAnimals = 6;
    Animal* animals[numAnimals];

    // Llenar el array con objetos Dog y Cat
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog(); // La primera mitad del array contiene Dogs
        } else {
            animals[i] = new Cat(); // La segunda mitad del array contiene Cats
        }
    }

    // Hacer que cada animal haga un sonido
    for (int i = 0; i < numAnimals; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}
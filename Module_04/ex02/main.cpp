/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:07:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 12:12:32 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " say: " << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << " say: " << std::endl;
	i->makeSound();
	/* std::cout << meta->getType() << " say: " << std::endl;
	meta->makeSound(); */
	

	delete (i);
	delete (j);
	// delete (meta);

	/* WrongAnimal* duck = new WrongCat();

	std::cout << duck->getType() << " say: ";
	duck->makeSound();

	delete duck; */
	
	return (0);
}

/* int main()
{
    // Crear objetos individuales de Dog y Cat
    Animal* j = new Dog();
    Animal* i = new Cat();
    Dog basic;
    Dog tmp = basic;

    // Establecer ideas en el brain del Cat
    Cat* cat = dynamic_cast<Cat*>(i);
    if (cat) {
        cat->setBrainIdea(0, "Cazar un ratón");
        cat->setBrainIdea(1, "Dormir en el sofá");
        cat->setBrainIdea(99, "Esto es una mierda!!");
        std::cout << "Idea 0 del gato: " << cat->getBrainIdea(0) << std::endl;
        std::cout << "Idea 1 del gato: " << cat->getBrainIdea(1) << std::endl;
        std::cout << "Idea 99 del gato: " << cat->getBrainIdea(99) << std::endl;
    }

    // Mostrar los sonidos de Dog y Cat
    std::cout << j->getType() << " says: " << std::endl;
    j->makeSound(); 
    std::cout << i->getType() << " says: " << std::endl;
    i->makeSound();

    // Liberar memoria para Dog y Cat
    delete i;
    delete j;

    return 0;

} */
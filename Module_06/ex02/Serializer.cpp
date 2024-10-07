/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:39:22 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 15:36:37 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include "A.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base*	Serializer::generate(void)
{
	srand(time(0));
	int randomNUmber = rand() % 3;
	switch (randomNUmber)
	{
	case 0:
		std::cout << "Generating instance A" << std::endl;
		return new A();
	case 1:
		std::cout << "Generating instace B" << std::endl;
		return new B();
	case 2:
		std::cout << "Generating instance C" << std::endl;
		return new C();
	default:
		return (NULL);
	}
}

void	Serializer::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Type" << std::endl;
}

void	Serializer::identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::bad_cast&) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::bad_cast&) {}
	
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::bad_cast&) {}

	std::cout << "Unknown Type" << std::endl;
}

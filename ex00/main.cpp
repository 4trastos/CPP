/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:15:30 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/11 17:00:54 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::srand(time(NULL));
	//Prueba 1: std::vector<int>
	std::cout << "Prueba 1: std::vector<int>" << std::endl;
	std::vector<int> vec(5);
	for (size_t i = 0; i < 5; i++)
	{
		vec[i] = std::rand() % 10;
		std::cout << vec[i] << std::endl;
	}
	try
	{
		std::cout << "Buscando 2 en el vector ... " << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 2);
		std::cout << "Elemento encontrado: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	//Prueba 2: std::list<int>
	std::cout << "Prueba 2: std::list<int>" << std::endl;
	std::list<int> lst;
	for (size_t i = 0; i < 5; i++)
	{
		int randomNumber = std::rand() % 10;
		lst.push_back(randomNumber);
		std::cout << randomNumber << std::endl;
	}
	try
	{
		std::cout << "Buscando 2 en la lista ... " << std::endl;
		std::list<int>::iterator it = easyfind(lst, 2);
		std::cout << "Elemento encontrado: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:52:43 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 13:59:47 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat peter("Peter", 55);
	std::cout << peter << std::endl;

	peter.incrementGrade();
	std::cout << peter << std::endl;
	peter.decrementGrade();
	std::cout << peter << std::endl;

	std::cout << "\n******** LOW GRADE TEST *********\n" << std::endl;
	try
	{
		Bureaucrat jhon("Jhon", 0);
		std::cout << jhon << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n******** HI GRADE TEST *********\n" << std::endl;
	try
	{
		Bureaucrat marco("Marco", 157);
		std::cout << marco << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n******** INCREMENT TEST *********\n" << std::endl;
	try
	{
		Bureaucrat axl("Axl", 150);
		std::cout << axl << std::endl;
		axl.incrementGrade();
		std::cout << axl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n******** DECREMENT TEST *********\n" << std::endl;
	try
	{
		Bureaucrat axl("Axl", 2);
		std::cout << axl << std::endl;
		axl.decrementGrade();
		std::cout << axl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
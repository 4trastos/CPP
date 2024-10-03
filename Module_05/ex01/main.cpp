/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/10/02 15:51:13 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat dave("Dave", 23);
		Bureaucrat alex(dave);
		Form	a("28b", 24, 20);
		std::cout << alex << std::endl;
		std::cout << a << std::endl;
		alex.signForm(a);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXX\n" << std::endl;

	try
	{
		Bureaucrat	mike = Bureaucrat("Mike", 50);
		Form		f("27a", 1, 1);

		std::cout << f << std::endl;
		mike.signForm(f);
		std::cout << f << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/09/21 12:08:33 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
		Form	a("A", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============================" << std::endl;

	try
	{
		Form b("B", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============================" << std::endl;

	try
	{
		Form	c("C", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============================" << std::endl;

	try
	{
		Form	d("D", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============================" << std::endl;

	try
	{
		Bureaucrat	mitchel = Bureaucrat("Mitchel", 1);
		Form		e("E", 150, 150);

		std::cout << e << '\n';
		mitchel.signForm(e);
		std::cout << e << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "===============================" << std::endl;

	try
	{
		Bureaucrat	mike = Bureaucrat("Mike", 50);
		Form		f("F", 1, 1);

		std::cout << f << '\n';
		mike.signForm(f);
		std::cout << f << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
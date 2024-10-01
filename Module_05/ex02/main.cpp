/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 12:42:58 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat mike("Mike", 1);
	Bureaucrat peter("Peter", 145);
	Bureaucrat george("George", 18);


	std::cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
	try
	{
		PresidentialPardonForm a("28A ");
		a.execute(mike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const char* e)
	{
		std::cout << e << '\n';
	}
	
	std::cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;

	try
	{
		PresidentialPardonForm b("28B ");
		b.beSigned(mike);
		b.execute(mike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const char* e)
	{
		std::cout << e << '\n';
	}
	
	std::cout << "\n*****************************" << std::endl;

	try
	{
		RobotomyRequestForm c("28C ");
		c.beSigned(george);
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
		std::cout << "===============================" << std::endl;
		c.execute(george);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}
	
	std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << std::endl;

	try
	{
		ShrubberyCreationForm d("28D ");
		d.beSigned(peter);
		d.execute(peter);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}

	std::cout << "\n*****************************" << std::endl;
}
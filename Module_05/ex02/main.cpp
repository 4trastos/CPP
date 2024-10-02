/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 18:34:01 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat mike("Mike", 25);
	Bureaucrat george("George", 72);
	Bureaucrat peter("Peter", 145);

	std::cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n" << std::endl;
	try
	{
		PresidentialPardonForm a("28A ");
		PresidentialPardonForm x(a);
		mike.signForm(x);
		//a.beSigned(mike);
		//std::cout << a << std::endl;
		mike.executeForm(x);
		std::cout << mike << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const char* e)
	{
		std::cout << e << '\n';
	}
	
	std::cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n" << std::endl;

	try
	{
		PresidentialPardonForm b("28B ");
		mike.signForm(b);
		mike.executeForm(b);
		std::cout << b << std::endl;
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
	std::srand(static_cast<unsigned int>(std::time(0)));
	try
	{
		RobotomyRequestForm c("28C ");
		george.signForm(c);
		george.executeForm(c);
		//std::cout << c << std::endl;
		std::cout << "===============================" << std::endl;
		george.executeForm(c);
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
	
	std::cout << "\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n" << std::endl;

	try
	{
		ShrubberyCreationForm d("28D ");
		//d.beSigned(peter);
		peter.signForm(d);
		peter.executeForm(d);
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
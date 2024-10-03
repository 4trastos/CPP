/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/10/02 16:22:50 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat james("James", 150);
	Intern Tom;
	Intern Mike(Tom);

	AForm	*form1;
	form1 = Mike.makeForm("Form which is differ from ours", "Paul");
	delete form1;

	try
	{
		AForm	*form2;
		form2 = Mike.makeForm("ShrubberyCreationForm", "James");
		std::cout << "Nombre de form2: " << form2->getName() << '\n';
		std::cout << *form2 << std::endl;
		form2->beSigned(james);
		form2->execute(james);
		std::cout << *form2 << std::endl;
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const char* e)
	{
		std::cout << e << '\n';
	}
	

	AForm	*form3;
	form3 = Mike.makeForm("RobotomyRequestForm", "Martin");
	delete form3;

	AForm	*form4;
	form4 = Mike.makeForm("PresidentialPardonForm", "Alex");
	delete form4;
	
	return (0);

}

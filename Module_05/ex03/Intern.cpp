/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:47:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/01 13:29:42 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& copy)
{
	(void)copy;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	return (*this);
}

AForm	*Intern::newPresidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::newRobotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::newShrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string FormName, std::string FormTarget)
{
	AForm *aux;

	aux = NULL;
	std::string Forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	AForm* (Intern::*functions[3])(const std::string&) = {&Intern::newShrubberyCreationForm, 
					&Intern::newRobotomyRequestForm, &Intern::newPresidentialPardonForm};
	for (size_t i = 0; i < 3; i++)
	{
		if (Forms[i] == FormName)
		{
			aux = (this->*functions[i])(FormTarget);
			std::cout << "Intern creates " << aux->getName() << std::endl;
			return (aux);
		}
	}
	std::cout << "Intern has an issue in order to create an appropriate form" << std::endl;
	return (aux);	
}
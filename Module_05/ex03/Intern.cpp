/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:47:59 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/02 12:13:57 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Constructor Intern copy called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Destructor Intern copy called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	(void)copy;
	std::cout << "Copy Intern copy called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
	std::cout << "operator Intern called" << std::endl;
	(void)copy;
	return (*this);
}

AForm	*Intern::newPresidentialPardonForm(const std::string& FormTarget)
{
	return (new PresidentialPardonForm(FormTarget));
}

AForm	*Intern::newRobotomyRequestForm(const std::string& FormTarget)
{
	return (new RobotomyRequestForm(FormTarget));
}

AForm	*Intern::newShrubberyCreationForm(const std::string& FormTarget)
{
	return (new ShrubberyCreationForm(FormTarget));
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
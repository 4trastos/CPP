/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:57:37 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 16:29:18 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor Bureaucrat default called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)  : name(copy.name), grade(copy.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << "Operator Bureaucrat called" << std::endl;
	this->grade = copy.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	std::cout << "Constructor Bureaucrat Special called" << std::endl;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	(this->grade)++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	(this->grade)--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Too High Grade\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Too Low Grade\n");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out << Bureaucrat.getName() << " bureaucrat grade: " << Bureaucrat.getGrade();
	return (out); 
}

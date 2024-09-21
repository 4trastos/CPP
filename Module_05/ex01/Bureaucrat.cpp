/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:19:25 by usuario           #+#    #+#             */
/*   Updated: 2024/09/21 12:33:41 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor Bureaucrat default called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name), grade(copy.grade)
{
    std::cout << "Copy Bureaucrat called" << std::endl;
    if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    std::cout << "Assigened Bureaucrat called" << std::endl;
    this->grade = copy.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name), grade(grade)
{
    std::cout << "Constructor Bureaucrat Speial called" << std::endl;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::incrementGrade()
{
    (this->grade)++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    (this->grade)--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::signForm(const Form& form) const
{
    try
    {
		form.beSigned(*this);
		std::cout << this->name << " sign " << form.getName() << std::endl;
	}
    catch(const std::exception& e)
    {
		std::cout << this->name << " cannot sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error: Too High Grade\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Too Low Grade\n");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return (out);
}
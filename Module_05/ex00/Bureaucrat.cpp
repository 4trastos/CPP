/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:14:21 by usuario           #+#    #+#             */
/*   Updated: 2024/10/02 15:34:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Construtor Bureaucrat Default called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destrutor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade)
{
    std::cout << "Copy Bureaucrat called" << std::endl;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::incrementGrade()
{
    if ((this->grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    (this->grade)--;
}

void    Bureaucrat::decrementGrade()
{
    if ((this->grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    (this->grade)++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade();
    return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error: Too High Grade\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Too Low Grade\n");
}
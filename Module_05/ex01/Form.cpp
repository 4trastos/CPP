/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:49:09 by usuario           #+#    #+#             */
/*   Updated: 2024/10/02 16:12:07 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(""), indicatesSigned(false), gradeSign(0), gradeExecute(0) {}

Form::~Form()
{
    std::cout << "Destrutor Form called" << std::endl;
}

Form::Form(const std::string& name, int gradeSign, int gradeExecute):
            name(name), indicatesSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    std::cout << "Construtor Form Spceial called" << std::endl;
     if (gradeSign < 1 || gradeExecute < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form& copy): name(copy.name), indicatesSigned(copy.indicatesSigned), 
			gradeSign(copy.gradeSign), gradeExecute(copy.gradeExecute)
{
    std::cout << "Copy Form called" << std::endl;
    if (gradeSign < 1 || gradeExecute < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form& Form::operator=(const Form& copy)
{
    std::cout << "Assineg Form called" << std::endl;
    this->indicatesSigned = copy.indicatesSigned;
    return (*this);   
}

const std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIndicatesSigned() const
{
    return (this->indicatesSigned);
}

int Form::getGradeSign() const
{
    return (this->gradeSign);
}

int Form::getGradeExecute() const
{
    return (this->gradeExecute);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low!");
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->indicatesSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << " is ";
	if (form.getIndicatesSigned() == true)
	{
		out << "Signed. ";
	}
	else
		out << " Not signed. ";
	return (out);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:49:09 by usuario           #+#    #+#             */
/*   Updated: 2024/09/21 12:58:13 by usuario          ###   ########.fr       */
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
		throw Bureaucrat::GradeTooLowException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(const Form& copy): name(copy.name), indicatesSigned(copy.indicatesSigned), 
			gradeSign(copy.gradeSign), gradeExecute(copy.gradeExecute)
{
    std::cout << "Copy Form called" << std::endl;
    if (gradeSign < 1 || gradeExecute < 1) 
		throw Bureaucrat::GradeTooLowException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooHighException();
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
		throw Form::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << " is ";
	if (form.getIndicatesSigned() == true)
		out << "Signed. ";
	else
		out << " Not signed. ";
	out << "Form has signed by a " << form.getGradeSign() << " grade ";
	out << "and has executed by a " << form.getGradeExecute() << " grade. ";
	return (out);
}
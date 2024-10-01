/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:49:09 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 15:43:35 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name(""), indicatesSigned(false), gradeSign(0), gradeExecute(0), target("") {}

AForm::~AForm()
{
    //std::cout << "Destrutor Form called" << std::endl;
}

AForm::AForm(const std::string& name, int gradeSign, int gradeExecute, const std::string& target):
            name(name), indicatesSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute),
			target(target)
{
    //std::cout << "Construtor Form Special called" << std::endl;
     if (gradeSign < 1 || gradeExecute < 1) 
		throw Bureaucrat::GradeTooLowException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooHighException();
}

AForm::AForm(const AForm& copy): name(copy.name), indicatesSigned(copy.indicatesSigned), 
			gradeSign(copy.gradeSign), gradeExecute(copy.gradeExecute)
{
    //std::cout << "Copy Form called" << std::endl;
    if (gradeSign < 1 || gradeExecute < 1) 
		throw Bureaucrat::GradeTooLowException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Bureaucrat::GradeTooHighException();
}

AForm& AForm::operator=(const AForm& copy)
{
    //std::cout << "Assineg Form called" << std::endl;
    this->indicatesSigned = copy.indicatesSigned;
    return (*this);   
}

const std::string AForm::getTarget() const
{
	return (this->target);
}

const std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getIndicatesSigned() const
{
    return (this->indicatesSigned);
}

int AForm::getGradeSign() const
{
    return (this->gradeSign);
}

int AForm::getGradeExecute() const
{
    return (this->gradeExecute);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low!");
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->indicatesSigned = true;
	else
		throw AForm::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << form.getName() << " is ";
	if (form.getIndicatesSigned() == true)
	{
		out << "Signed. ";
		out << "Form has signed by a " << form.getGradeSign() << " grade ";
		out << "and has executed by a " << form.getGradeExecute() << " grade. ";
	}
	else
		out << " Not signed. ";
	return (out);
}

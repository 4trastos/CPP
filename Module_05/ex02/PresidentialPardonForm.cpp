/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:05:04 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/02 12:35:03 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Constructor PresidentialPardonForm default called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm default called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :
		AForm(copy.getName(), 25, 5)
{
	std::cout << "Presidential copy called" << std::endl;
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	this->target = copy.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
				AForm("PresidentialPardonForm", 25, 5) 
{
	this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed and cannot be executed ";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std::cout << this->target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
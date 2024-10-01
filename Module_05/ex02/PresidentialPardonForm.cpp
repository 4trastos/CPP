/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:05:04 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/01 11:01:21 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	(void)copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	(void)copy;
	return  (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
				AForm("PresidentialPardonForm", 25, 5, target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
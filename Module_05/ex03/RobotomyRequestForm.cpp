/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:04:23 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/01 11:32:21 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	(void)copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	(void)copy;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
		AForm("RobotomyRequestForm", 72, 45, target) {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	
	std::cout << "Rrrrrrrrrrrrrrrrrrrrrrrrrrrr..." << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully 50";
		std::cout << " percent of the time." << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " has not been robotomized successfully";
		std::cout << " so it's failure" << std::endl;
	}
}
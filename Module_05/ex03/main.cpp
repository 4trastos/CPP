/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:18:56 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 13:36:50 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern Tom;

	AForm	*form1;
	form1 = Tom.makeForm("Form which is differ from ours", "Paul");
	delete form1;

	AForm	*form2;
	form2 = Tom.makeForm("ShrubberyCreationForm", "Louis");
	delete form2;

	AForm	*form3;
	form3 = Tom.makeForm("RobotomyRequestForm", "Martin");
	delete form3;

	AForm	*form4;
	form4 = Tom.makeForm("PresidentialPardonForm", "Alex");
	delete form4;
}
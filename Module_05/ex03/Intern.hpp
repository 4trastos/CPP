/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:48:11 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/01 12:56:57 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern();

		AForm	*makeForm(std::string FormName, std::string FormTarget);
		AForm	*newShrubberyCreationForm(const std::string& target);
		AForm	*newRobotomyRequestForm(const std::string& target);
		AForm	*newPresidentialPardonForm(const std::string& target);
};

#endif
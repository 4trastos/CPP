/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:48:11 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/02 16:19:51 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		AForm	*newShrubberyCreationForm(const std::string& FormTarget);
		AForm	*newRobotomyRequestForm(const std::string& FormTarget);
		AForm	*newPresidentialPardonForm(const std::string& FormTarget);

	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern();

		AForm	*makeForm(std::string FormName, std::string FormTarget);
};

#endif
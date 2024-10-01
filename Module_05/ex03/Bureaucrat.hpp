/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:20:09 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 11:25:21 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int		grade;
	
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		Bureaucrat(const std::string& name, int grade);
		void 	incrementGrade();
		void	decrementGrade();
		
		const std::string getName(void) const;
		int			getGrade(void) const;

        void    signForm(AForm& form);   

		class GradeTooHighException : public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char * what() const throw();
		};

		void executeForm(AForm const & form);

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif
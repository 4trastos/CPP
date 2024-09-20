/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:57:56 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/20 16:27:19 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iomanip>
# include <iostream>

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

		class GradeTooHighException : public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char * what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif
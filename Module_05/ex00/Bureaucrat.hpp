/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:14:28 by usuario           #+#    #+#             */
/*   Updated: 2024/09/21 10:04:57 by usuario          ###   ########.fr       */
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
        int     grade;

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);
        ~Bureaucrat();

        Bureaucrat(const std::string& name, int grade);
        
        const std::string    getName(void) const;
        int    getGrade(void) const;
        void    incrementGrade();
        void    decrementGrade();

        class GradeTooHighException : public std::exception
        {
            const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char * what() const throw();
        };
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat);

#endif
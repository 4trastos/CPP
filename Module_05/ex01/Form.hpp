/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:49:18 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 18:17:31 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool	indicatesSigned;
        const int   gradeSign;
        const int   gradeExecute;
        
    public:
        Form();
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        ~Form();

        Form(const std::string& name, int gradeSign, int gradeExecute);
        const std::string getName() const;
        bool	getIndicatesSigned() const;
        int		getGradeSign() const;
        int		getGradeExecute() const;

        void    beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException: public std::exception
        {
            const char * what() const throw();
        };
        
        class GradeTooLowException: public std::exception
        {
            const char * what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
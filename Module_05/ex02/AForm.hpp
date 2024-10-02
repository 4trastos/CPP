/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:49:18 by usuario           #+#    #+#             */
/*   Updated: 2024/10/01 18:25:38 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool	indicatesSigned;
        const int   gradeSign;
        const int   gradeExecute;
        
    public:
        AForm();
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        virtual ~AForm();

        AForm(const std::string& name, int gradeSign, int gradeExecute);
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

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
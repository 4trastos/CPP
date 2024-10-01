/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:03:35 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/01 11:31:46 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
		AForm("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	(void)copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	(void)copy;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	
	std::ofstream file_out;
	std::string file = this->getTarget() + "_shrubbery";

	file_out.open(file.c_str());
	if (!file_out)
	{
		std::cout << "Error: cannot open " << file << std::endl;
	}
	else
	{
		file_out << "        _-_\n";
        file_out << "     /~~   ~~\\\n";
        file_out << "  /~~         ~~\\\n";
        file_out << " {               }\n";
        file_out << "  \\  _-     -_  /\n";
        file_out << "    ~  \\ //  ~\n";
        file_out << " _- -   | | _- _\n";
        file_out << "   _ -  | |   -_\n";
        file_out << "       // \\\\\n";
	}
	file_out.close();
}
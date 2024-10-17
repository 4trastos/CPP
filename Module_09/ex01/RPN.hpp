/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:08:30 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 11:42:32 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <stack>
# include <vector>

class RPN
{
	private:
		bool isOperator(const std::string& token);
		bool rpnOperation(const std::string& op, std::stack<int>& values);
		std::vector<std::string> parseInput(const std::string& input);
		std::string express;
		
	public:
		RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);
		~RPN();

		RPN(std::string& prontf);

		bool	evaluateRPN(const std::string& expression);	
};

#endif


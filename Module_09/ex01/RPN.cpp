/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:08:21 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 12:43:51 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : express("") {}

RPN::~RPN() {}

RPN::RPN(const RPN& copy) :  express(copy.express) {}

RPN::RPN(std::string& prontf) : express(prontf) {}

RPN& RPN::operator=(const RPN& copy)
{
	if (this != &copy)
		this->express = copy.express;
	return (*this);
}

bool	RPN::evaluateRPN(const std::string& expression)
{
	std::stack<int> stack;
	std::vector<std::string> tokens = parseInput(expression);

	for (size_t i = 0; i < tokens.size(); i++)
	{
		const std::string& token = tokens[i];
		if (!isOperator(token))
		{
			int	value;
			std::istringstream(token) >> value;
			stack.push(value);
		}
		else
		{
			if (!rpnOperation(token, stack))
			{
				std::cout << "Error: Invalid operation." << std::endl;
				return (false);
			}
		} 
	}

	if (stack.size() == 1)
		std::cout << "Result : " << stack.top() << std::endl;
	else
	{
		std::cout << "Error: Malformed expression." << std::endl;
		return (false);
	}

	return (true);		
}

bool	RPN::isOperator(const std::string& token)
{
	if (token == "-" || token == "+" || token == "*" || token == "/")
		return (true);
	else
		return (false);
}

bool	RPN::rpnOperation(const std::string& op, std::stack<int>& values)
{
	if (values.size() < 2)
		return (false);
	
	int		value2 = values.top(); values.pop();
	int		value1 = values.top(); values.pop();
	int		result = 0;
	if (op == "+")
		result = value1 + value2;
	else if (op == "-")
		result = value1 - value2;
	else if (op == "*")
		result = value1 * value2;
	else if (op == "/")
	{
		if (value2 == 0)
		{
			std::cout << "Error: Division by zero." << std::endl;
			return (false);
		}
		result = value1 / value2;
	}
	values.push(result);
	return (true);
}

std::vector<std::string> RPN::parseInput(const std::string& input)
{
	std::vector<std::string>	tokens;
	std::string					token;
	std::istringstream	tokenStrim(input);
	
	while (tokenStrim >> token)
	{
		tokens.push_back(token);
	}
	
	return (tokens);
}

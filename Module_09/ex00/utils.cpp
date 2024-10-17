/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:42:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 18:02:29 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const int MAX_TOKENS = 100;

void freeTokens(char** tokens)
{
    for (int i = 0; tokens[i] != NULL; ++i)
	{
        delete[] tokens[i];
    }
    delete[] tokens;
}

std::string trim(const std::string& str)
{
    std::string::size_type start = 0;
    while (start < str.size() && std::isspace(static_cast<unsigned char>(str[start])))
        ++start;

    std::string::size_type end = str.size();
    while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
        --end;

    return str.substr(start, end - start);
}

char **split(const std::string& str, char delimiter)
{
    char** tokens = new char*[MAX_TOKENS + 1];
    std::string token;
    size_t start = 0;
    size_t end = str.find(delimiter);
    int tokenIndex = 0;

    while (end != std::string::npos) {
        token = str.substr(start, end - start);
        tokens[tokenIndex] = new char[token.length() + 1];
        std::strcpy(tokens[tokenIndex], token.c_str());
        tokenIndex++;
        start = end + 1;
        end = str.find(delimiter, start);
    }

    if (start < str.length()) {
        token = str.substr(start);
        tokens[tokenIndex] = new char[token.length() + 1];
        std::strcpy(tokens[tokenIndex], token.c_str());
        tokenIndex++;
    }

    tokens[tokenIndex] = NULL;
    return tokens;
}

bool	isValiDate(std::string date, int *flag)
{
	bool isLeapYear = false;
	
	if (date.size() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	std::string yearStr = date.substr(0, 4);
	std::string monthStr = date.substr(5, 2);
	std::string dayStr = date.substr(8, 2);

	int year = std::atoi(yearStr.c_str());
	int month = std::atoi(monthStr.c_str());
	int day = std::atoi(dayStr.c_str());

	if (month < 1 || month > 12)
		return (false);
	
	int daysMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		isLeapYear = true;
	if (isLeapYear && month == 2)
		daysMonth[2] = 29;
	if (day < 1 || day > daysMonth[month - 1])
    {
        *flag = -1;
		return (false);
    }
	return (true);
}

bool	isPositiveNumber(std::string value)
{
	int	dotCount = 0;
	
	if (value.empty())
		return (false);
	
	for (size_t i = 0; i < value.size(); i++)
	{
		if (value[i] == '.')
		{
			dotCount++;
			if (dotCount > 1)
				return (false);
		}
		else if (!std::isdigit(static_cast<unsigned int>(value[i])))
			return (false);
	}
	
	float valuef = std::atof(value.c_str());
	if (valuef <= 0)
		return (false);
	return (true);
}

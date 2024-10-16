/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/16 13:30:01 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()  : file("") {};

BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	this->file = copy.file;
	*this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	this->file = copy.file;
	return (*this);
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
	this->file = filename;
}

bool BitcoinExchange::ParseFile(std::string filename)
{
	if (filename.size() >= 4)
	{
		std::string extension = filename.substr(filename.size() - 4, 4);
		if (extension == ".txt")
			return (true);
		else
			return (false);
	}
	else
	{
		std::cout << "Error: file not found" << std::endl;
		return (false);
	}
}

void	BitcoinExchange::OpenProntf(std::string filename)
{
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error: could not open file. " <<  std::endl;
		return;
	}

	std::string line;
	int			lineNumber = 0;

	while (std::getline(infile, line))
	{
		lineNumber++;
		if (lineNumber == 1)
			continue;

		std::string trimLine = trim(line);
		if (trimLine.empty())
			continue;
		
		std::vector<std::string> tokens = split(trimLine, '|');
		
		if (tokens.size() != 2)
		{
			std::cout << "Error: bad input => " << trimLine << std::endl;
			continue;
		}
		
		std::string date = trim(tokens[0]);
		std::string valueStr = trim(tokens[1]);

		if (!isValiDate(date))
		{
			std::cout << "Error: bad input => " << trimLine << std::endl;
			continue;
		}

		if (!isPositiveNumber(valueStr))
		{
			float valuef = std::atof(valueStr.c_str());
			if (valuef <= 0)
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << "Error: bad input => " << trimLine << std::endl;
			continue;
		}

		float valuef = std::atof(valueStr.c_str());

		if (valuef > 2147483647.0f || static_cast<int>(valuef) > 2147483647)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		
		std::map<std::string, float>::iterator it = exchangeRates.find(date);
		
		if (it == exchangeRates.end())
		{
			std::map<std::string, float>::iterator lowerIt = exchangeRates.lower_bound(date);
			if (lowerIt == exchangeRates.begin())
			{
				std::cout << "Error: date " << date << " is before all available exchange rates." << std::endl;
				continue;
			}
			else
			{
				--lowerIt;
				float rate = lowerIt->second;
				float result = valuef * rate;
				std::cout << date << " => " << valuef << " = " << result << std::endl;	
			}
		}
		else
		{
			float rate = it->second;
			float result = valuef * rate;
			std::cout << date << " => " << valuef << " = " << result << std::endl;	
		}
	}
	infile.close();
}

bool	BitcoinExchange::isValiDate(std::string date)
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
		return (false);
	return (true);
}

bool	BitcoinExchange::isPositiveNumber(std::string value)
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
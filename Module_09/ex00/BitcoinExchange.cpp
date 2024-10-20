/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 17:51:12 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : file("") 
{
	if (!LoadExchangeRates("rates.txt"))
		std::cout << "Error: Failed to load exchange rates." << std::endl;
	else
	{
		for (std::map<std::string, float>::iterator it = exchangeRates.begin() ; it != exchangeRates.end(); it++)
		{}
		
	}
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string filename) : file(filename)
{
	if (!LoadExchangeRates("rates.txt"))
		std::cout << "Error: Failed to load exchange rates." << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) : file(copy.file),
										exchangeRates(copy.exchangeRates) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	if (this != &copy)
	{
		this->file = copy.file;
		this->exchangeRates = copy.exchangeRates;
	}
	return (*this);
}


bool BitcoinExchange::ParseFile(std::string filename)
{
	if (filename.size() >= 4)
	{
		std::string extension = filename.substr(filename.size() - 4, 4);
		if (extension == ".txt")
			return (true);
		else if (extension == ".csv")
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

void	BitcoinExchange::OpenProntf(const std::string filename)
{
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
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
		
		char **tokens = split(trimLine, '|');
		
		int tokenCount = 0;
        while (tokens[tokenCount] != NULL)
		{
            tokenCount++;
        }

        if (tokenCount != 2) {
            std::cout << "Error: bad input => " << trimLine << std::endl;
            freeTokens(tokens);
            continue;
        }

		std::string date = trim(tokens[0]);
		std::string valueStr = trim(tokens[1]);
		int				flag = 0;

		if (!isValiDate(date, &flag))
		{
			if (flag == -1)
				std::cout << "Error: This year is not a leap year => " << trimLine << std::endl;
			else
				std::cout << "Error: bad input => " << trimLine << std::endl;
			continue;
		}

		if (!isPositiveNumber(valueStr))
		{
			std::cout << "Error: not a positive number." << std::endl;
    		continue;
		}

		float valuef = std::atof(valueStr.c_str());

		if (valuef > 2147483647.0)
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
				std::cout << "Closest date: " << lowerIt->first << " Rate: " << rate << std::endl;
				std::cout << date << " => " << valuef << " = " << result << std::endl;	
			}
		}
		else
		{
			float rate = it->second;
			float result = valuef * rate;
			std::cout << date << " => " << valuef << " = " << result << std::endl;	
		}
		freeTokens(tokens);
	}
	infile.close();
}

bool	BitcoinExchange::LoadExchangeRates(const std::string& ratesFile)
{
	std::ifstream infile(ratesFile.c_str());
	if (!infile)
	{
		std::cout << "Error: could not open rates file." << std::endl;
		return (false);
	}

	std::string line;
	int			lineNumber = 0;

	while (std::getline(infile, line))
	{
		lineNumber++;
		if (lineNumber == 1)
			continue;
		
		std::string trimmedLine = trim(line);
		if (trimmedLine.empty())
			continue;
		
		char **tokens = split(trimmedLine, '|');
		
		int tokenCount = 0;
        while (tokens[tokenCount] != NULL)
		{
            tokenCount++;
        }

        if (tokenCount != 2) {
            std::cout << "Error: bad input => " << trimmedLine << std::endl;
            freeTokens(tokens);
            continue;
        }


		std::string date = trim(tokens[0]);
		std::string valueStr = trim(tokens[1]);
		int			flag = 0;

		if (!isValiDate(date, &flag))
		{
			if (flag == -1)
				std::cout << "This year is not a leap year" << std::endl;
			else
				std::cout << "Error: bad input => " << std::endl;
			continue;
		}

		if (!isPositiveNumber(valueStr))
		{
			std::cout << "Error: not a positive number." << trimmedLine << std::endl;
    		continue;
		}

		float valuef = std::atof(valueStr.c_str());
		if (valuef > 2147483647.0f)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		freeTokens(tokens);
		exchangeRates[date] = valuef;
	}
	infile.close();
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:49:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/15 15:29:12 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

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
		std::string aux = filename.substr(filename.size() - 4, 4);
		if (aux == ".txt")
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
	std::string line;
	int			lineNumber = 0;
	
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error: could not open file. " <<  std::endl;
		return;
	}
	while (std::getline(infile, line))
	{
		std::string trimLine = trim(line);
		if (trimLine.empty())
			continue;
		std::vector<std::string> token = split(trimLine, '|');
	}	
}
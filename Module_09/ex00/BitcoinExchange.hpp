/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:46:02 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 17:53:54 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iomanip>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <cctype>
# include <map>
# include <sstream>
# include <cstring>

const int MAX_TOKENS = 100;

class BitcoinExchange
{
	private:
		std::string file;
		std::map<std::string, float> exchangeRates; // fecha -> tasa de cambio

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange();

		BitcoinExchange(std::string filename);
		
		bool	ParseFile(std::string filename);
		void	OpenProntf(const std::string filename);
		bool	LoadExchangeRates(const std::string& ratesFile);
};

std::string trim(const std::string& str); // Recortar espacios en blanco
char** split(const std::string& str, char delimiter);
bool    isValiDate(std::string date, int *flag);
bool	isPositiveNumber(std::string value);
void	freeTokens(char** tokens);

#endif
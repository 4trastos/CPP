/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:46:02 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/15 13:45:03 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iomanip>
# include <iostream>
# include <fstream>
# include <vector>
# include <list>
# include <cstdlib>
# include <cctype>
# include <map>

class BitcoinExchange
{
	private:
		std::string file;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);
		~BitcoinExchange();

		BitcoinExchange(std::string filename);
		
		bool	ParseFile(std::string filename);
		void	OpenProntf(std::string filename);
};

std::string trim(const std::string& str);
std::vector<std::string> split(const std::string& str, char delimiter);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:59:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/21 08:41:07 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

int	emptyString(std::string s1, std::string s2)
{
	if (s1.length() == 0)
	{
		std::cout << "s1 empty try again" << std::endl;
		return (1);
	}
	if (s2.length() == 0)
	{
		std::cout << "s2 empty try again" << std::endl;
		return (1);
	}
	return (0);
}

void	replace(std::string s1, std::string s2, std::ifstream &file_in, std::ofstream &file_out)
{
	std::string str;

	while (getline(file_in, str))
	{
		std::size_t find_pos;
		while ((find_pos = str.find(s1)) != std::string::npos)
		{
			file_out << str.substr(0, find_pos) << s2;
			str.erase(0, find_pos + s1.length());
		}
		file_out << str << std::endl;
	}
}

void	loadFiles(std::string file, std::string s1, std::string s2)
{
	if (emptyString(s1, s2))
		exit(1);
	
	std::ifstream file_in;

	file_in.open(file.c_str());
	if (!file_in.is_open())
	{
		std::cout << "Error: " << file << " do not open" << std::endl;
		exit (1);
	}
	file += ".replace";

	std::ofstream file_out;

	file_out.open(file.c_str());
	if (!file_out.is_open())
	{
		std::cout << "Error: " << file << " do not open" << std::endl;
		exit (1);
	}

	copy(s1, s2, file_in, file_out);

	file_in.close();
	file_out.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Wrong input, use -> ./replace file s1 s2" << std::endl;
	else
		loadFiles(argv[1], argv[2], argv[3]);
	return (0);
}

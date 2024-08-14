/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:36:22 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/14 11:33:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

int PhoneBook::Empty(Contact cont)
{
	int	out = 0;
	
	if (cont.getFirstName().length() > 0) out += 1;
    if (cont.getLastName().length() > 0) out += 1;
    if (cont.getNickname().length() > 0) out += 1;
    if (cont.getPhoneNumber().length() > 0) out += 1;
    if (cont.getDarkestSecret().length() > 0) out += 1;
	return (out);	
}

void PhoneBook::Add()
{
	static int	i = 0;
	int			empty = 0;
	std::string line;

	while (empty < 4)
	{
		std::cout << "Insert firts name" << std::endl;
		std::getline(std::cin, line);
		Contacts[i].setFirstName(line);
	
		std::cout << "Insert last name" << std::endl;
		std::getline(std::cin, line);
		Contacts[i].setLastName(line);

		std::cout << "Insert nickname" << std::endl;
		std::getline(std::cin, line);
		Contacts[i].setNickname(line);

		std::cout << "Insert phone number" << std::endl;
		std::getline(std::cin, line);
		Contacts[i].setPhoneNumber(line);

		std::cout << "Insert darkest Secret" << std::endl;
		std::getline(std::cin, line);
		Contacts[i].setDarkestSecret(line);

		empty = PhoneBook::Empty(Contacts[i]);

		if (empty < 4)
			std::cout << "There are empty fields, please write again" << std::endl;
	}
	i++;
	i = i % 8;
}

void PhoneBook::Search()
{
	int	book_size = 0;
	int	i = 0;
	int	flag = 0;
	int	index;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8 && flag == 0)
	{
		std::string line = Contacts[i].getFirstName();
		if (!PhoneBook::Empty(Contacts[i]))
			flag = 1;
		if (flag == 0)
		{
			std::cout << "|" << std::setw(10) << i + 1;

			std::string cut_firstname = Contacts[i].getFirstName();
			if (cut_firstname.length() > 10)
				cut_firstname = cut_firstname.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << cut_firstname;

			std::string cut_lastname = Contacts[i].getLastName();
			if (cut_lastname.length() > 10)
				cut_lastname = cut_lastname.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << cut_lastname;

			std::string cut_nickname = Contacts[i].getNickname();
			if (cut_nickname.length() > 10)
				cut_nickname = cut_nickname.substr(0, 9) + ".";
			std::cout << "|" <<  std::setw(10) << cut_nickname << "|";
			std::cout << std::endl;

			book_size++;
			i++;
		}
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
	std::cout << "input search index"  << std::endl;
	if (!(std::cin >> index) || index < 1 || index > book_size)
	{
		std::cin.clear();
		std::cout << "Wrong index" << std::endl;
	}
	else
	{
		index--;
		std::cout << "first name: " << Contacts[index].getFirstName() << std::endl;
		std::cout << "last name: " << Contacts[index].getLastName() << std::endl;
		std::cout << "nickname: " << Contacts[index].getNickname() << std::endl;
		std::cout << "phone number: " << Contacts[index].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << Contacts[index].getDarkestSecret() << std::endl;
	}
	std::cin.ignore();
}



	/* while (flag == 0)
	{
		std::cout << "Insert firts name" << std::endl;
		std::getline(std::cin, line);
		if (line.length() == 0)
			std::cout << "The field cannot be empty" << std::endl;
		else
		{
			Contacts[i].setFirstName(line);
			flag = 1;
		}
	} */

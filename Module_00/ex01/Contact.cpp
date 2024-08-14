/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:28:43 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/13 14:29:49 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::setFirstName(std::string str)
{
	this->first_name = str;
}

void Contact::setLastName(std::string str)
{
	this->last_name = str;
}

void Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	this->nickname = str;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkest_secret = str;
}

std::string Contact::getFirstName(void)
{
	return this->first_name;
}

std::string Contact::getLastName(void)
{
	return this->last_name;
}

std::string Contact::getNickname(void)
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}


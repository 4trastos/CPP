/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:32:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 13:39:02 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data originalData(1, "Test Data");
	std::cout << "Original Data Address: " << &originalData << std::endl;

	uintptr_t serialized = Serializer::serialize(&originalData);
	std::cout << "Serialized Data: " << serialized << std::endl;

	Data* deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized Data Address: " << &deserialized << std::endl;

	if (&originalData == deserialized)
		std::cout << "Success: Deserialized pointer matches the original pointer: " << serialized << std::endl;
	else
		std::cout << "Error: Deserialized pointer does not match the original pointer." << std::endl;
	
	std::cout << "Original Data ID: " << originalData.id << ", Name: " << originalData.name << std::endl;
	std::cout << "Deserialized Data ID: " << deserialized->id << ", Name: " << deserialized->name << std::endl;
	return (0);
}
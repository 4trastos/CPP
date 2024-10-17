/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:47:42 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 15:06:37 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	
	PmergeMe sorter;
	int	size = 0;

	sorter.loadData(argv);
	size = sorter.sizeSort();
	sorter.printSequence();

	sorter.sortVector();
	sorter.printSort();

	sorter.loadData(argv);

	clock_t start = clock();
	sorter.sortVector();
	clock_t end = clock();
	sorter.printTime(start, end, size, "std::vector");

	start = clock();
	sorter.sortDeque();
	end = clock();
	sorter.printTime(start, end, size, "std::quede");

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:48:15 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 15:13:39 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	this->deq = copy.deq;
	this->vec = copy.vec;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& copy)
{
	if (this != &copy)
	{
		this->deq = copy.deq;
		this->vec = copy.vec;
	}
	return (*this);
}

void	PmergeMe::loadData(char **argv)
{
	int i = 1;
	int value = 0;

	while (argv[i] != NULL)
	{
		value = std::atoi(argv[i]);
		if (value < 0)
		{
			std::cout << "Error" << std::endl;
			exit (1);
		}
		this->deq.push_back(value);
		this->vec.push_back(value);
		i++;
	}
}

void	PmergeMe::sortVector()
{
	std::sort(this->vec.begin(), this->vec.end());
}

void	PmergeMe::sortDeque()
{
	std::sort(this->deq.begin(), this->deq.end());	
}


void	PmergeMe::printSequence() const
{
	std::cout << "Before: ";
	
	for (size_t i = 0; i < this->vec.size(); i++)
		std::cout << this->vec[i] << " ";
	
	std::cout << std::endl;
}

void	PmergeMe::printSort() const
{
	std::cout << "After: ";
	for (size_t i = 0; i < this->vec.size(); i++)
		std::cout << this->vec[i] << " ";
	std::cout << std::endl;
}

int PmergeMe::sizeSort()
{
	int size = this->vec.size();
	return (size);
}

void	PmergeMe::printTime(clock_t start, clock_t end, int elements, const std::string& cointainerName) const
{
	double elapseTime = double(end - start) / CLOCKS_PER_SEC;
	elapseTime = elapseTime * 1000;
	std::cout << "Time to process a range of " << elements << " elements " << cointainerName << ": " << elapseTime << " us" << std::endl; 
}
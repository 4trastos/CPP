/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:58:57 by usuario           #+#    #+#             */
/*   Updated: 2024/10/12 14:31:59 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::~Span() {}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span& copy)
{
    this->N = copy.N;
    this->vect = copy.vect;
    *this = copy;
}

Span& Span::operator=(const Span& copy)
{
    if (this != &copy)
    {
        this->N = copy.N;
        this->vect = copy.vect;
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (this->vect.size() >= this->N)
        throw SpanFullException();
    vect.push_back(number);
}

unsigned int Span::shortestSpan() const
{
    if (vect.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> sorted = vect;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = UINT_MAX;
    for (size_t i = 0; i < sorted.size(); i++)
    {
        unsigned int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
        {
            minSpan = span;
        }
    }
    return (minSpan);
}

unsigned int Span::longestSpan() const
{
    std::vector<int> aux = this->vect;
    if (this->vect.size() < 2)
        throw NotEnoughNumbersException();
    int min = *std::min_element(aux.begin(), aux.end());
    int max = *std::max_element(aux.begin(), aux.end());
    return (static_cast<unsigned int>(max - min));
}

void Span::fillVector(int n)
{
	for (int i = 0; i < n; i++) {
		this->addNumber(rand() % 1000);
	}
}

void Span::vectView()
{
	for (size_t i = 0; i < (this->vect.size()); i++)
	{
		std::cout << vect[i] << " ";
	}
	std::cout << std::endl;
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return ("Error: Not enough numbers to find a span.");
}

const char* Span::SpanFullException::what() const throw()
{
	return ("Error: Span is already full. Cannot add more numbers.");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:03:42 by usuario           #+#    #+#             */
/*   Updated: 2024/10/12 14:21:46 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iomanip>
# include <iostream>
# include <vector>
# include <exception>
# include <cstdlib>
# include <ctime>
# include <list>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vect;

    public:
        Span();
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
        
        Span(unsigned int N);
        void  addNumber(int number);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        void fillVector(int n);
		void vectView();

        class SpanFullException : public std::exception
        {
            virtual const char * what() const throw();
        };

        class NotEnoughNumbersException : public std::exception
        {
            virtual const char * what() const throw();
        };
};

#endif
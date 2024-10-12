/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:03:42 by usuario           #+#    #+#             */
/*   Updated: 2024/10/12 12:58:16 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iomanip>
# include <iostream>

class Span
{
    private:
        /* data */
    public:
        Span();
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
        
        Span(unsigned int N);
        void  addNumber();
        void shortestSpan();
        void longestSpan();


};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:15:32 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/08 13:34:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;		
}
template <typename T>
T min(T a, T b)
{
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
	
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	else
		return (b);
	
}
#endif
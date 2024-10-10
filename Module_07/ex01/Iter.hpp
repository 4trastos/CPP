/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:07 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/10 18:43:19 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iomanip>
# include <iostream>
# include <string>

template <typename T>
void iter(T *array, int len, void (*func)(const T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void iter(const T *array, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void iter(const T *array, int len, void (*func)(const T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void iter(T *array, int len, void (*func)(T&))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void ft_printf(T const &pt)
{
	std::cout << pt << std::endl;
}

#endif
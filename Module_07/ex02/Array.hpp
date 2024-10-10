/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:50:34 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/10 19:09:06 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <iomanip>

template <typename T>
class Array
{
	private:
		T 			*data;
		unsigned int len;
		
	public:
		Array()
		{
			this->len = 0;
			this->data = NULL;
		};

		Array(unsigned int num)
		{
			if (num < 0)
				std::cout << "Error: Number negative!" << std::endl;
			this->len = num;
			this->data = new T[len]();
		};

		Array(const Array& copy);

		Array& operator=(const Array& copy);

		~Array() {};

};

#endif
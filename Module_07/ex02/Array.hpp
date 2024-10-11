/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:50:34 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/11 12:24:04 by davgalle         ###   ########.fr       */
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
			this->data = new T[len];
		};

		Array(const Array& copy)
		{
			if (copy.data)
			{
				this->len = copy.len;
				this->data = new T[copy.size()];
				for (size_t i = 0; i < copy.size(); i++)
				{
					this->data[i] = copy.data[i];
				}
			}
			else
			{
				this->len = copy.len;
				this->data = NULL;
			}
		};

		Array& operator=(const Array& copy)
		{
			if (this == &copy)
				return (*this);
			if (this->len > 0)
				delete [] this->data;
			if (copy.data)
			{
				this->len = copy.len;
				this->data = new T[copy.size()];
				for (size_t i = 0; i < copy.size(); i++)
				{
					this->data[i] = copy.data[i];
				}
			}
			else
			{
				this->len = copy.len;
				this->data = NULL;
			}
			return (*this);
			
		};

		~Array()
		{
			if (this->len > 0)
				delete [] this->data;
		};

		unsigned int size() const
		{
			return (this->len);
		}

		T& operator[] (int index)
		{
			if (index < 0 || index >= this->len)
				throw IdException();
			return (this->data[index]); 
		}

		const T& operator[] (int index) const
		{
			if (index < 0 || index >= this->len)
				throw IdException();
			return (this->data[index]); 
		}

		class IdException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Error: Index out of array length");
			}
		};

};

#endif
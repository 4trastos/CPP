/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:15:34 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/11 17:03:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <algorithm>
# include <iterator>
# include <exception>

class easyFindException : public std::exception
{
	virtual const char * what() const throw()
	{
		return ("Element not found in the container.");
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw easyFindException();
	return (it);
}


#endif
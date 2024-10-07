/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:25:44 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 13:36:41 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include "Serializer.hpp"

struct Data
{
	int id;
	std::string name;

	Data(int id, const std::string name) : id(id), name(name) {}
};

#endif
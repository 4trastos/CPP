/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:37:12 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/13 11:43:31 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];
	
	public:
		PhoneBook();
		~PhoneBook();
	
		void Add();
		void Search();
		int	Empty(Contact cont);
};

#endif
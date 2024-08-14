/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:10:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/08/13 14:29:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
	
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickname(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkestSecret(std::string str);

		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

};

#endif
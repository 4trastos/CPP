/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:22:29 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/09 17:29:40 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Fixed
{
	private:
		int	value;
		static const int FRACT_BITS = 8;
		
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);	
		~Fixed();

		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
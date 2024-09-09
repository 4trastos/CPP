/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:20:26 by davgalle          #+#    #+#             */
/*   Updated: 2024/09/09 16:07:29 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	value;
		static const int FRACT_BITS = 8;
		
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int int_number);
		Fixed(const float float_number);
		Fixed& operator = (const Fixed& copy);
		~Fixed();

		void	setRawBits(const int raw);
		int		getRawBits(void) const;

		float 	toFloat(void) const;
		int 	toInt(void) const;
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);

#endif
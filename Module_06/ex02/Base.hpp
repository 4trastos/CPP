/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:58:49 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/07 16:20:38 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <random>
# include <iostream>

class Base
{
	public:
		virtual ~Base();
		
};

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);
	
#endif
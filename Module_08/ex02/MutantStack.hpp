/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:12:57 by usuario           #+#    #+#             */
/*   Updated: 2024/10/13 12:20:03 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>

class MutantStack
{
    private:
        /* data */
    public:
        MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack& operator=(const MutantStack& copy);
        ~MutantStack();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:12:57 by usuario           #+#    #+#             */
/*   Updated: 2024/10/13 13:07:42 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <algorithm>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
        ~MutantStack() {};
        
        MutantStack& operator=(const MutantStack& copy)
        {
            if (this == &copy)
                return (*this);
            std::stack<T>::operator=(copy);
            return (*this);
        };
        
        iterator begin()
        {
            return (std::stack<T>::c.begin());
        }

        iterator end()
        {
            return (std::stack<T>::c.end());
        }

        const_iterator begin() const
        {
            return (std::stack<T>::c.begin());
        }

        const_iterator end() const
        {
            return (std::stack<T>::c.end());
        }

        reverse_iterator rbegin()
        {
            return (std::stack<T>::c.rbegin());
        }

        reverse_iterator rend()
        {
            return (std::stack<T>::c.rend());
        }

        const_reverse_iterator rbegin() const
        {
            return (std::stack<T>::c.rbegin());
        }

        const_reverse_iterator rend() const
        {
            return (std::stack<T>::c.rend());
        }
};

#endif
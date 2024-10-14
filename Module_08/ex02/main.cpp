/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:13:04 by usuario           #+#    #+#             */
/*   Updated: 2024/10/14 13:14:38 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
		MutantStack<int>	mstack;

		//Prueba 1:  Default test
		std::cout << "Prueba 1:  Default test" << std::endl;

		mstack.push(5);
		mstack.push(17);

		std::cout << "**************   Elemnto más grande **************" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << "******  Elimina el elemento de arriba del Stack *****" << std::endl;
		mstack.pop();

		std::cout << "**************   Tamaño del STACK   **************" << std::endl;
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << "**************    Print    STACK    **************" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << "*************** revers print stack ***************" << std::endl;
		MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
		MutantStack<int>::reverse_iterator r_ite = mstack.rend();
		++r_it;
		--r_it;
		while (r_it != r_ite)
		{
			std::cout << *r_it << std::endl;
			++r_it;
		}
		std::cout << "--------------------------------------------------" << std::endl;
	}

	{
		std::list<int>	mlist;

		//Prueba 2:  List test
		std::cout << "Prueba 2:  List test" << std::endl;

		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "************** Último Elemento **************" << std::endl;
		std::cout << mlist.back() << std::endl;
		std::cout << "******  Elimina el elemento de abajo del list *****" << std::endl;
		mlist.pop_back();

		std::cout << "*****  Tamaño de la lista  **********" << std::endl;
		std::cout << mlist.size() << std::endl;

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::cout << "**************    Print    LIST    **************" << std::endl;
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s1(mlist);

		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << "************** revers print list **************" << std::endl;
		std::list<int>::reverse_iterator r_it = mlist.rbegin();
		std::list<int>::reverse_iterator r_ite = mlist.rend();
		++r_it;
		--r_it;
		while (r_it != r_ite)
		{
			std::cout << *r_it << std::endl;
			++r_it;
		}
		std::cout << "--------------------------------------------------" << std::endl;
	}
    return 0;
}
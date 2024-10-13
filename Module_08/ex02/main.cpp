/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:13:04 by usuario           #+#    #+#             */
/*   Updated: 2024/10/13 13:09:29 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
		MutantStack<int>	mstack;

		std::cout << "================== Default test ==================" << std::endl;

		mstack.push(5);
		mstack.push(17);
		std::cout << "++++++++++++++++++++ top elem ++++++++++++++++++++" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << "++++++++++++++++++++++ pop() +++++++++++++++++++++" << std::endl;
		mstack.pop();

		std::cout << "++++++++++++++++++++++ size() ++++++++++++++++++++" << std::endl;
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << "+++++++++++++++++++ print stack ++++++++++++++++++" << std::endl;
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

		std::cout << "+++++++++++++++ revers print stack +++++++++++++++" << std::endl;
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

		std::cout << "==================== List test ===================" << std::endl;

		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "+++++++++++++++++++++ back() +++++++++++++++++++++" << std::endl;
		std::cout << mlist.back() << std::endl;
		std::cout << "+++++++++++++++++++ pop_back() +++++++++++++++++++" << std::endl;
		mlist.pop_back();

		std::cout << "++++++++++++++++++++++ size() ++++++++++++++++++++" << std::endl;
		std::cout << mlist.size() << std::endl;

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::cout << "++++++++++++++++++++ print list ++++++++++++++++++" << std::endl;
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

		std::cout << "+++++++++++++++ revers print list ++++++++++++++++" << std::endl;
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
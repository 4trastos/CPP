/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:48:27 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/17 17:25:23 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <list>
# include <string>
# include <deque>
# include <ctime>
# include <algorithm>

class PmergeMe
{
	private:
		std::deque<int> deq;
		std::list<int> lis;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();

		void	loadData(char **argv);
		void	sortList();
		void	sortDeque();
		void	printSequence() const;
		void	printSort() const;
		int		sizeSort();
		void	printTime(clock_t start, clock_t end, int elements, const std::string& cointainerName) const;
};

#endif
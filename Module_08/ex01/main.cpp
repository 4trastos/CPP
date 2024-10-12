/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:01:48 by usuario           #+#    #+#             */
/*   Updated: 2024/10/12 14:45:22 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::srand(time(NULL));
    //Prueba 1: Default test
	std::cout << "Prueba 1: Test del Subject" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
    //Prueba 2: Test Vector Vacío
	std::cout << "Prueba 2: Test Vector Vacío" << std::endl;
	Span empty = Span(5);

	try {
		std::cout << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << std::endl;
    //Prueba 3: Test agregar un número al vector vacío
	std::cout << "Prueba 3: Test agregar un número al vector vacío" << std::endl;
	empty.addNumber(6);

	try {
		std::cout << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << std::endl;
    //Prueba 4: Test agregar un número más al vector 'vacío'
	std::cout << "Prueba 4: Test agregar un número más al vector" << std::endl;

	empty.addNumber(3);

	try {
		std::cout << "longestSpan() = " << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << "shortestSpan() = " << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << std::endl;
    //Prueba 5: Test agregar 3 números más al vector 'vacío'
	std::cout << "Prueba 5: Test agregar 3 números más al vector 'vacío'" << std::endl;
	empty.addNumber(17);
	empty.addNumber(9);
	empty.addNumber(11);

	std::cout << "shortestSpan() = " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan() = " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
    //Prueba 6: Test 1000 números aleatorios
	std::cout << "Prueba 6: Test 1000 números aleatorios" << std::endl;

	Span rand_vec(30);
	rand_vec.addNumber(222);
	rand_vec.fillVector(29);
	rand_vec.vectView();
	std::cout << "shortestSpan() = " << rand_vec.shortestSpan() << std::endl;
	std::cout << "longestSpan() = " << rand_vec.longestSpan() << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	return (0);
}
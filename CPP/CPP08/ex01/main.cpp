/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:54 by atamas            #+#    #+#             */
/*   Updated: 2025/07/09 17:05:27 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main()
{
	/* SUBJECT TEST */
	Span spp = Span(5);
	spp.addNumber(6);
	spp.addNumber(3);
	spp.addNumber(17);
	spp.addNumber(9);
	spp.addNumber(11);
	std::cout << spp.shortestSpan() << std::endl;
	std::cout << spp.longestSpan() << std::endl;

	std::cout << "---TEST----\n" << "Normal:" << std::endl;
	try
	{
		Span lol(2);
		lol.addNumber(4);
		lol.addNumber(42);
		std::cout << lol.shortestSpan() << '\n';
		std::cout << lol.longestSpan() << '\n';
	
	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "---TEST----\n" << "Empty:" << std::endl;
	try
	{
		Span empty(1);
		empty.addNumber(4);
		empty.addNumber(42);
		std::cout << empty.shortestSpan() << '\n';
		std::cout << empty.longestSpan() << '\n';
	
	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---TEST----\n" << "Extra:" << std::endl;
	Span sp(10000);

	std::vector<int> vec;
	std::srand(std::time(0));
	for (int i = 0; i < 10000; ++i)
		vec.push_back(std::rand());

	sp.multiValues(vec.begin(), vec.end());

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	return 0;

}
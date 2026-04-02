/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:43:17 by atamas            #+#    #+#             */
/*   Updated: 2025/12/01 21:02:21 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>
#include <stdlib.h>


int	strToInt(std::string value)
{
	long tempDigit;
	if (value.size() == 0)
		throw std::runtime_error("Empty string in argument list");
	if (value.at(0) == '0' && value.size() != 1)
		throw std::runtime_error("Incorrect number: " + value);
	for (size_t i = 0; i < value.size(); i++)
	{
		if (std::isdigit(value.at(i)) == 0)
			throw std::runtime_error("Not a number found: " + value);
	}
	tempDigit = atol(value.c_str());
	if (tempDigit > __INT_MAX__ || tempDigit < 0)
		throw std::runtime_error("Not a positive integer or bigger than integer " + value);
	return tempDigit;
}

/* 
The time function takes the Container and times the process of sorting and returns it
*/
template <typename Container, typename Function>
double	timeFunction(Container& cont, Function func)
{
	clock_t start, end;
	start = 0;
	end = 0;
	start = clock();
	func(cont);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	return time_taken;
}

int	main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " [positive integer sequence]\n";
		return 1;
	}
	try
	{
		std::vector<int> vec;
		std::deque<int> deq;
		for (int i = 1; i < argc; i++)
		{
			int tempDigit = strToInt(argv[i]);
			vec.push_back(tempDigit);
			deq.push_back(tempDigit);
		}
		std::cout << "Before: ";
		for (int i = 0; i < 5 && i < argc - 1; i++)
		{
			std::cout << vec.at(i) << " ";
		}
		if (vec.size() > 5)
			std::cout << "[...]";
		std::cout << '\n';
		PmergeMe obj;
		obj.sortVector(vec);
		obj.sortDeque(deq);
		std::cout << "After: ";
		std::vector<int> sorted = obj.getSortedVector();
		// std::deque<int> sorted = obj.getSortedDeque();
		for (int i = 0; i < argc - 1; i++)
		{
			std::cout << sorted.at(i) << " ";
		}
		std::cout << '\n';
		std::cout << "Time to process a range of " << argc - 1 << " with vector: " << std::fixed << std::setprecision(5) << obj.getVectorTime() << " us\n";
		std::cout << "Time to process a range of " << argc - 1 << " with deque:  " << std::fixed << std::setprecision(5) << obj.getDequeTime() << " us\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return 1;
	}
	return 0;
}
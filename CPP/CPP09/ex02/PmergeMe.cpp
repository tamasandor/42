/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:52:00 by atamas            #+#    #+#             */
/*   Updated: 2025/12/01 21:05:27 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <cmath>

PmergeMe::PmergeMe()
{
	_vectorTime = 0;
	_dequeTime = 0;
}

PmergeMe::PmergeMe(const PmergeMe& original)
{
	*this = original;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& original)
{
	if (this != &original)
	{
		
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::sortVector(std::vector<int>& vector) {
	_vectorTime = 0;
	clock_t start, end;
	start = clock();
	_original = vector;
	_merge_insertion_sort<std::vector<int> >(vector, 1);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	_vectorTime = time_taken;
	_sortedVector.assign(vector.begin(), vector.end());
}

void PmergeMe::sortDeque(std::deque<int>& deque) {
	_dequeTime = 0;
	clock_t start, end;
	start = clock();
	_merge_insertion_sort(deque, 1);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	_dequeTime = time_taken;
	_sortedDeque.assign(deque.begin(), deque.end()); // Store the sorted deque as a vector
}

long _jacobsthal_number(long n)
{
	return round((pow(2, n + 1) + pow(-1, n)) / 3);
}
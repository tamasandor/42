/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:52 by atamas            #+#    #+#             */
/*   Updated: 2025/05/07 05:50:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_N(N), m_Size(0)
{

}

Span::Span(const Span& original) : m_N(original.m_N), m_Size(original.m_Size)
{
	*this = original;
}

Span &Span::operator=(const Span& original)
{
	if (this != &original)
	{
		m_N = original.m_N;
		m_Size = original.m_Size;
		m_Vector.clear();
		m_Vector = original.m_Vector;
	}
	return *this;
}

Span::~Span()
{
	m_Vector.clear();
}

void	Span::addNumber(int newNumber)
{
	if (m_N == m_Size)
		throw arrayFullException();
	m_Vector.push_back(newNumber);
	m_Size++;
}

int		Span::longestSpan()
{
	if (m_Vector.size() < 2)
		throw std::logic_error("No span for less than 2 numbers");

	int minVal = *std::min_element(m_Vector.begin(), m_Vector.end());
	int maxVal = *std::max_element(m_Vector.begin(), m_Vector.end());
	return maxVal - minVal;
}

int		Span::shortestSpan()
{
	if (m_Vector.size() < 2)
		throw std::logic_error("No span for less than 2 numbers");
	std::vector <int> sorted = m_Vector;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

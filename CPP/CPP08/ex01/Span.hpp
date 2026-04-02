/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:57 by atamas            #+#    #+#             */
/*   Updated: 2025/05/07 06:17:30 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <limits>
#include <vector>

class Span
{
	private:
		unsigned int	m_N;
		unsigned int	m_Size;
		std::vector <int> m_Vector;
	public:
		Span(unsigned int N);
		Span(const Span& original);
		Span &operator=(const Span& original);
		~Span();

		void	addNumber(int newNumber);
		int		longestSpan();
		int		shortestSpan();

		
		
		class arrayFullException : public std::exception 
		{
			public:
			virtual const char * what() const throw() {
				return "Span container is full";
			}
		};

		template <typename Iterator>
		void	multiValues(Iterator begin, Iterator end)
		{
			for (Iterator it = begin; it < end; ++it)
			{
				if (m_N == m_Size)
					throw arrayFullException();
				m_Vector.push_back(*it);
				m_Size++;
			}
		}
	};

#endif
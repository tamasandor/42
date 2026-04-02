/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:37:39 by atamas            #+#    #+#             */
/*   Updated: 2025/04/29 22:20:45 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
	private:
		T				*m_array;
		unsigned int	m_size;
	public:
		Array(): m_array(new T[0]), m_size(0) {std::cout << "Array: Default constructor" << std::endl;};
		Array(unsigned int n): m_array(new T[n]), m_size(n) {std::cout << "Array: unsigned int constructor" << std::endl;};
		Array(const Array& original) : m_array(new T[original.m_size]), m_size(original.m_size) { *this = original; std::cout << "Array: Copy constructor" << std::endl;};
		const Array &operator=(const Array& original)
		{
			std::cout << "Array: Copy assignment operator" << std::endl;
			if (this != &original)
			{
				if (m_array)
					delete[] m_array;
				m_array = new T[original.m_size];
				m_size = original.m_size;
				for (unsigned int i = 0; i < m_size; i++)
					m_array[i] = original.m_array[i];
			}
			return *this;
		};
		~Array() {delete[] m_array; std::cout << "Array: destructor" << std::endl;};

		T &operator[](unsigned int i)
		{
			if (i >= m_size)
				throw std::out_of_range("Index out of bounds");
			return m_array[i];
		};
		unsigned int size() const { return m_size; };
};

#endif
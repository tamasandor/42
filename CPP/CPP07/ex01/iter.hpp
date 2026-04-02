/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:55:35 by atamas            #+#    #+#             */
/*   Updated: 2025/04/29 20:08:41 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* arrayAddress, size_t len, void (*f) (T &arrayAddress))
{
	for (size_t i = 0; i < len; i++)
		f(arrayAddress[i]);
}


// prove that it works with instantiated function template
template<typename T>
void print(T value)
{
	std::cout << value << std::endl;
}
#endif
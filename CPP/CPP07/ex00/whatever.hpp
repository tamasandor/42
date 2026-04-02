/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:51:03 by atamas            #+#    #+#             */
/*   Updated: 2025/04/29 19:05:36 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T min(T& x, T& y)
{
	if (x < y)
		return x;
	return y;
}

template<typename T>
T max(T& x, T& y)
{
	if (x > y)
		return x;
	return y;
}
#endif

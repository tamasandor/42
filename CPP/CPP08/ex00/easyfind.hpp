/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:52:26 by atamas            #+#    #+#             */
/*   Updated: 2025/05/05 23:08:50 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
void easyfind(T content, int search)
{
	typename T::iterator it = std::find(content.begin(), content.end(), search);
	if (it != content.end())
		std::cout << "Found it: " << *it << std::endl;
	else
		throw std::runtime_error("Wasn't able to find the requested value");
	
}

#endif
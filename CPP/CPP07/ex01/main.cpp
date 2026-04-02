/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:55:32 by atamas            #+#    #+#             */
/*   Updated: 2025/04/29 20:11:46 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int array[3] = {42, 2, 4};

	::iter(array, 3, ::print);

	std::string strArray[4] = {"Hi", "from", "string", "array"};
	::iter(strArray, 4, ::print);
	return 0;
}
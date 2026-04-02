/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:07 by atamas            #+#    #+#             */
/*   Updated: 2025/05/05 23:12:08 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> nums;
	nums.push_back(45);
	nums.push_back(0);
	nums.push_back(10);
	nums.push_back(42);
	nums.push_back(4);

	std::cout << "-----TEST-----\n" << "To find the requested value\n";
	try
	{
		easyfind(nums, 42);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----TEST-----\n" << "No such value\n";
	try
	{
		easyfind(nums, 782);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
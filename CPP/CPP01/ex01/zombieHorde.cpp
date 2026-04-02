/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:39:08 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 15:07:42 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	if (N <= 0)
	{
		std::cout << "The number of Zombies must be a positive number" << std::endl;
		return (NULL);
	}
	
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}

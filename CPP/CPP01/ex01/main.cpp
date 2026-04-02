/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:39:59 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 15:08:16 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies;
	int		numberZombies;

	numberZombies = 5;
	zombies = zombieHorde(numberZombies, "Walid");
	for (int i = 0; i < numberZombies; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	numberZombies = 0;
	zombies = zombieHorde(numberZombies, "Maurice");
	if (zombies)
	{
		for (int i = 0; i < numberZombies; i++)
		{
			zombies[i].announce();
		}
		delete[] zombies;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:22:53 by atamas            #+#    #+#             */
/*   Updated: 2025/02/05 18:58:41 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	int	amount = 6;

	Animal *zoo[amount];
	for (int i = 0; i < amount; i++)
	{
		if (i < (amount / 2))
			zoo[i] = new Dog();
		else
			zoo[i] =  new Cat();
	}
	for (int i = 0; i < amount; i++)
	{
		delete zoo[i];
	}
	Cat basic;
{
Cat tmp = basic;
}
	return (0);
}
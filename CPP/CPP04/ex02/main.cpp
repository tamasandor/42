/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:22:53 by atamas            #+#    #+#             */
/*   Updated: 2025/02/07 09:52:34 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	// const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* cAnimal = new WrongCat();

	i->makeSound();
	j->makeSound();
	// meta->makeSound();
	std::cout << "<<Wrong test start from here>>\n\n";
	wAnimal->makeSound();
	cAnimal->makeSound();
	// delete meta;
	delete i;
	delete j;
	delete wAnimal;
	delete cAnimal;
	return (0);
}
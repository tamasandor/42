/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:22:53 by atamas            #+#    #+#             */
/*   Updated: 2025/02/07 14:42:01 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* cAnimal = new WrongCat();

	std::cout << "This is an Animal: " << meta->getType() << '\n';
	std::cout << "This is a cat: " << cat->getType() << '\n';
	std::cout << "This is a dog: " << dog->getType() << '\n';
	
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << "\n<<Wrong test start from here>>\n\n";
	wAnimal->makeSound();
	cAnimal->makeSound();
	delete meta;
	delete cat;
	delete dog;
	delete wAnimal;
	delete cAnimal;
	return (0);
}
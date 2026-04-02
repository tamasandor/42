/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:10:49 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 17:05:00 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPtr = &brain;
	std::string	&brainRef = brain;

	std::cout << "The memory address of string: " << &brain << '\n';
	std::cout << "The memory address of string pointer: " << brainPtr << '\n';
	std::cout << "The memory address of string reference: " << &brainRef << '\n';

	std::cout << "The value of string: " << brain << '\n';
	std::cout << "The value of string pointer: " << *brainPtr << '\n';
	std::cout << "The value of string reference: " << brainRef << std::endl;
}

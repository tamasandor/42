/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:25:45 by atamas            #+#    #+#             */
/*   Updated: 2025/02/10 23:19:22 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << "WoooooOOoff!" << '\n';
}

Dog::Dog()
{
	m_brain = new Brain();
	std::cout << "Dog constructor called\n";
	m_type = "Dog";
}

Dog::Dog(const Dog &original) : Animal()
{
	std::cout << "Dog Copy constructor called\n";
	if (this != &original)
		m_type = original.m_type;
}

Dog &Dog::operator= (const Dog &original)
{
	std::cout << "Dog Copy assignment operator called\n";
	if (this != &original)
	{
		delete m_brain;
		this->m_brain = new Brain();
		this->m_type = original.m_type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Dog deconstructor called\n";
}

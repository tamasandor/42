/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:22:00 by atamas            #+#    #+#             */
/*   Updated: 2025/02/10 23:19:26 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	m_brain = new Brain();
	std::cout << "Cat default constructor called\n";
	m_type = "Cat";
}

Cat::Cat(const Cat &original) : Animal()
{
	std::cout << "Cat copy constructor called\n";
	if (this != &original)
		*this = original;
}

Cat &Cat::operator = (const Cat &original)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &original)
	{
		delete m_brain;
		this->m_brain = new Brain();
		this->m_type = original.m_type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MeeeeeoooOOOOww!" << '\n';
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << "Cat deconstuctor called\n";
}

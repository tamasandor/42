/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:33:39 by atamas            #+#    #+#             */
/*   Updated: 2025/01/09 13:48:56 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	m_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	m_type = type;
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	m_type = original.m_type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &original)
{
	std::cout << "WrongAnimal copy assignment called\n";
	if (this != &original)
		m_type = original.m_type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << '\n';
}

std::string WrongAnimal::getType() const
{
	return (m_type);
}

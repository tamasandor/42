/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:57:15 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 20:08:13 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: default constructor called\n";
}

Cure::Cure(const Cure &original) : AMateria(original)
{
	std::cout << "Cure: copy constructor called\n";
	if (this != &original)
	{
		this->m_type = original.m_type;
	}
}

Cure &Cure::operator = (const Cure &original)
{
	std::cout << "Cure: copy assignment operator called\n";
	if (this != &original)
	{
		this->m_type = original.m_type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure: destructor called\n";
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

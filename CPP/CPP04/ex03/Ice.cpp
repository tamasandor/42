/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:13:02 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 20:07:59 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: default constructor called\n";
}

Ice::Ice(const Ice &original) : AMateria(original)
{
	std::cout << "Ice: copy constructor called\n";
	if (this != &original)
	{
		this->m_type = original.m_type;
	}
}

Ice &Ice::operator = (const Ice &original)
{
	std::cout << "Ice: copy assignment operator called\n";
	if (this != &original)
	{
		this->m_type = original.m_type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice: destructor called\n";
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

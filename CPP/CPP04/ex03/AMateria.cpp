/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:47:12 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 20:34:11 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	m_type = type;
	std::cout << "AMateria: constructor called\n";
}

AMateria::AMateria(const AMateria &original)
{
	std::cout << "AMateria: copy constructor called\n";
	if (this != &original)
	{
		this->m_type = original.m_type;
	}
}

AMateria &AMateria::operator = (const AMateria &original)
{
	std::cout << "AMateria: copy assignment operator called\n";
	if (this != &original)
		this->m_type = original.m_type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria: destructor called\n";
}

std::string const & AMateria::getType() const
{
	return (m_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Materia used on " << target.getName() << '\n';
}

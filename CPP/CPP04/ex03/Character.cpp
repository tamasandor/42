/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:12:42 by atamas            #+#    #+#             */
/*   Updated: 2025/02/13 17:57:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	m_name = name;
	for (int i = 0; i < 4; i++)
		m_slots[i] = NULL;
	std::cout << "Character: default constructor called\n";
}

Character::Character(const Character &original)
{
	std::cout << "Character: copy constructor called\n";
	for (int i = 0; i < 4; i++)
	{
		delete m_slots[i];
		this->m_slots[i] = original.m_slots[i]->clone();
	}
}

Character &Character::operator = (const Character &original)
{
	std::cout << "Character: copy assignment operator called\n";
	for (int i = 0; i < 4; i++)
	{
		delete m_slots[i];
		this->m_slots[i] = original.m_slots[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character: destructor called\n";
	for (int i = 0; i < 4; i++)
		delete m_slots[i];
}

std::string const & Character::getName() const
{
	return (m_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!m_slots[i])
		{
			m_slots[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4 || !m_slots[idx])
	{
		std::cerr << "You tried to unequip a non existent Materia\n";
		return ;
	}
	m_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4 || !m_slots[idx])
	{
		std::cerr << "You tried to use a non existent Materia\n";
		return ;
	}
	m_slots[idx]->use(target);
}

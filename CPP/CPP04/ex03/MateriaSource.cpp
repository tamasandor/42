/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:29:31 by atamas            #+#    #+#             */
/*   Updated: 2025/02/13 18:02:46 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: default constructor called\n";
	for (int i = 0; i < 4; i++)
		m_materias[i] = NULL;
	for (int i = 0; i < 100; i++)
		m_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &original)
{
	std::cout << "MateriaSource: copy constructor called\n";
	if (this != &original)
	{
		for (int i = 0; i < 4; i++)
		{
			if (original.m_materias[i])
				this->m_materias[i] = original.m_materias[i]->clone();
			else
				this->m_materias[i] = NULL;
		}
		for (int i = 0; i < 100; i++)
			this->m_inventory[i] = original.m_inventory[i];
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &original)
{
	std::cout << "MateriaSource: copy assignment operator called\n";
	if (this != &original)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->m_materias[i];
			if (original.m_materias[i])
				this->m_materias[i] = original.m_materias[i]->clone();
			else
				this->m_materias[i] = NULL;
		}
		for (int i = 0; i < 100; i++)
			this->m_inventory[i] = original.m_inventory[i];

	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: destructor called\n";
	for (int i = 0; i < 4; i++)
		delete m_materias[i];
	for (int i = 0; i < 100; i++)
		delete m_inventory[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		std::cerr << "This is not a valid Materia to learn\n";
	for (int i = 0; i < 100; i++)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			break ;
		}
		if (i == 99)
		{
			std::cerr << "There is no more slot in the inventory, your Materia got deleted safely\n";
			delete m;
			m = NULL;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!m)
		{
			std::cerr << "Not a valid Materia\n";
			return ;
		}
		if (!m_materias[i])
		{
			m_materias[i] = m->clone();
			return ;
		}
	}
	std::cerr << "There is no more slot to learn a new Materia\n";
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_materias[i] && type == m_materias[i]->getType())
			return (m_materias[i]->clone());
	}
	return (NULL);
}

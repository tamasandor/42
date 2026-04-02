/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:34:59 by atamas            #+#    #+#             */
/*   Updated: 2025/01/30 20:57:02 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("No name"), m_hitPoints(10), m_energyPoints(10),
m_attackDamage(0)
{
	std::cout << "Default constructor called with no name" << "\n";
}

ClapTrap::ClapTrap(std::string name)  : m_name(name), m_hitPoints(10), m_energyPoints(10),
m_attackDamage(0)
{
	std::cout << "Default constructor called with name: " << name << "\n";
	
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	std::cout << "Default copy constructor has been called" << "\n";
	
	this->m_name = original.m_name;
	this->m_hitPoints = original.m_hitPoints;
	this->m_energyPoints = original.m_energyPoints;
	this->m_attackDamage = original.m_attackDamage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &original)
{
	std::cout << "Copy assignment operator has been called" << "\n";
	if (this == &original)
		return (*this);
	this->m_name = original.m_name;
	this->m_hitPoints = original.m_hitPoints;
	this->m_energyPoints = original.m_energyPoints;
	this->m_attackDamage = original.m_attackDamage;

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints <= 0)
		std::cout << "ClapTrap has no more energy to attack\n";
	else
	{
		std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage\n";
		m_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoints <= 0)
		std::cout << "ClapTrap is already dead!\n";
	else
	{
		std::cout << "ClapTrap " << getName() << " took " << amount << " of damage!\n";
		m_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "Repair was called with 0\n";
		return ;
	}
	if (!m_hitPoints || !m_energyPoints)
		std::cout << "ClapTrap cannot do anything without hitpoints or energypoints\n";
	else
	{
		m_energyPoints--;
		std::cout << "ClapTrap repaired itself gaining " << amount << " of HP\n";
		m_hitPoints += amount;
	}
}

std::string	ClapTrap::getName()
{
	return (m_name);
}

int			ClapTrap::getHitPoints()
{
	return (m_hitPoints);
}

int			ClapTrap::getEnergyPoints()
{
	return (m_energyPoints);
}

int			ClapTrap::getAttackDamage()
{
	return (m_attackDamage);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:53:06 by atamas            #+#    #+#             */
/*   Updated: 2025/02/03 17:59:01 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constuctor called with No name\n";
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constuctor called with name: " << name << '\n';
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap()
{
	std::cout << "ScavTrap copy constuctor called\n";
	m_name = original.m_name;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &original)
{
	std::cout << "ScavTrap copy assignment operator called with\n";
	if (this == &original)
		return (*this);
	m_name = original.m_name;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (m_hitPoints > 0)
		std::cout << "ScavTrap " << m_name << " is now in Gate keeper mode!\n";
	else
		std::cout << "ScavTrap " << m_name << " is dead already!\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (m_energyPoints <= 0)
		std::cout << "ScavTrap has no more energy to attack\n";
	else
	{
		std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of damage\n";
		m_energyPoints--;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}
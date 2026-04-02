/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:55:36 by atamas            #+#    #+#             */
/*   Updated: 2025/01/30 21:08:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called with no name!\n";
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default FragTrap constructor called with name " << name << " !\n";
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap()
{
	std::cout << "FragTrap copy constructor is called!\n";
	m_name = original.m_name;
	m_hitPoints = original.m_hitPoints;
	m_energyPoints = original.m_energyPoints;
	m_attackDamage = original.m_attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap& original)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if (this == &original)
		return (*this);
	m_name = original.m_name;
	m_hitPoints = original.m_hitPoints;
	m_energyPoints = original.m_energyPoints;
	m_attackDamage = original.m_attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap with name " << m_name << " wants to have high five!\n";
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}

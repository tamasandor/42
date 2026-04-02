/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:37 by atamas            #+#    #+#             */
/*   Updated: 2024/10/23 11:58:57 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	m_name = name;
	m_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack( void )
{
	if (m_weapon == NULL)
		std::cout << "There was no weapon to attack with" << std::endl;
	else
		std::cout << m_name  << " attacked with their " << m_weapon->getType() << '\n';
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:46:46 by atamas            #+#    #+#             */
/*   Updated: 2024/10/18 13:37:12 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

void	Zombie::setName(std::string name)
{
	m_name = name;
	return ;
}

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie()
{
	std::cout << m_name << ": just got destroyed" << std::endl;
}
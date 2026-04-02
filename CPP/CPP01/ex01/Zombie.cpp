/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:39:28 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 15:07:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string const name)
{
	m_name = name;
}

void	Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

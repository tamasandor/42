/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:53:04 by atamas            #+#    #+#             */
/*   Updated: 2025/02/03 17:59:39 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(/* args */);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& original);
	ScavTrap& operator=(const ScavTrap& original);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string& target);
};

#endif

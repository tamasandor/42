/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:35:01 by atamas            #+#    #+#             */
/*   Updated: 2024/12/20 14:23:55 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		m_name;
	int				m_hitPoints;
	int				m_energyPoints;
	int				m_attackDamage;
public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &original);
	ClapTrap &operator = (const ClapTrap &original);
	~ClapTrap();
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName();
	int			getHitPoints();
	int			getEnergyPoints();
	int			getAttackDamage();
	
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:52 by atamas            #+#    #+#             */
/*   Updated: 2024/10/23 11:59:03 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon			*m_weapon;
	std::string		m_name;
public:
	void	setWeapon(Weapon &weapon);
	void	attack( void );
	HumanB(std::string m_name);
	~HumanB();
};

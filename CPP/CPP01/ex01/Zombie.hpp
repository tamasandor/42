/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:38:38 by atamas            #+#    #+#             */
/*   Updated: 2024/10/21 15:07:45 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string m_name;
public:
	void	setName(std::string const name);
	void	announce(void);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif

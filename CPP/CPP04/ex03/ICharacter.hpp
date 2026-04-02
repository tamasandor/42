/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:01:07 by atamas            #+#    #+#             */
/*   Updated: 2025/02/13 18:01:25 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual		~ICharacter() {}
	virtual		std::string const & getName() const = 0;
	virtual		void equip(AMateria* m)= 0;
	virtual		void unequip(int idx)= 0;
	virtual		void use(int idx, ICharacter& target)= 0;
};

#endif

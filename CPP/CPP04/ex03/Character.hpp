/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:10:04 by atamas            #+#    #+#             */
/*   Updated: 2025/02/13 17:59:33 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
	std::string		m_name;
	AMateria		*m_slots[4];
public:
	Character(std::string name);
	Character(const Character &original);
	Character &operator= (const Character &original);
	~Character();
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif

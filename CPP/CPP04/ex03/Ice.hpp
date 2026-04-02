/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:11:23 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 20:07:32 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(const Ice &original);
	Ice &operator= (const Ice &original);
	~Ice();
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif

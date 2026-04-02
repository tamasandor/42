/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:56:06 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 20:07:44 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(const Cure &original);
	Cure &operator= (const Cure &original);
	~Cure();
	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif

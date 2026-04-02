/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:47:14 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 23:01:57 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	m_type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &original);
	AMateria &operator= (const AMateria &original);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual ~AMateria();
};

#endif

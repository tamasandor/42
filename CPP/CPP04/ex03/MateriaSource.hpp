/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:26:37 by atamas            #+#    #+#             */
/*   Updated: 2025/02/12 23:02:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *m_materias[4];
	AMateria *m_inventory[100];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &original);
	MateriaSource &operator= (const MateriaSource &original);
	~MateriaSource();
	void		learnMateria(AMateria* m);
	AMateria	*createMateria(std::string const &type);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:25:11 by atamas            #+#    #+#             */
/*   Updated: 2025/02/13 18:00:04 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual		~IMateriaSource() {}
	virtual		void learnMateria(AMateria*) = 0;
	virtual		AMateria* createMateria(std::string const & type) = 0;
};
#endif

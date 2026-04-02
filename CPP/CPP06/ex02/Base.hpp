/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:28:15 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 21:48:15 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);


#endif
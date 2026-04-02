/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@stundent.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:35:21 by atamas            #+#    #+#             */
/*   Updated: 2025/02/10 23:03:07 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		m_ideas[i] = "New idea";
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constructor called\n";
	if (this != &original)
		for (int i = 0; i < 100; i++)
			this->m_ideas[i] = original.m_ideas[i];
}

Brain &Brain::operator = (const Brain &original)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &original)
	{
		for (int i = 0; i < 100; i++)
			this->m_ideas[i] = original.m_ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}

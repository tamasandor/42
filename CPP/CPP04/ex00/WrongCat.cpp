/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:39:48 by atamas            #+#    #+#             */
/*   Updated: 2025/01/09 13:45:06 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	m_type = "WrongCat";
	std::cout << "WrongCat Default constractor called\n";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal()
{
	std::cout << "WrongCat Copy constractor called\n";
	if (this != &original)
		*this = original;
}

WrongCat &WrongCat::operator = (const WrongCat &original)
{
	std::cout << "WrongCat copy assignment called\n";
	if (this != &original)
		this->m_type = original.m_type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat MeeeeeoooOOOOww!" << '\n';
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called\n";
}

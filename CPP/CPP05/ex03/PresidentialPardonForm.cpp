/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:26:30 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 22:30:32 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidental", 25, 5)
{
	m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : AForm("Presidental", 25, 5)
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
}

PresidentialPardonForm& PresidentialPardonForm::operator =(const PresidentialPardonForm &original)
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string PresidentialPardonForm::getTarget() const
{
	return (m_target);
}


void	PresidentialPardonForm::action() const
{
	std::cout << m_target << " has been pardoned by Zaphod Beeblebrox.\n";
}

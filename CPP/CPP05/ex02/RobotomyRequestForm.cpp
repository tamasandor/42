/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:23:57 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 22:23:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45)
{
	m_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm("Robotomy", 72, 45)
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
}

RobotomyRequestForm& RobotomyRequestForm::operator =(const RobotomyRequestForm &original)
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::getTarget() const
{
	return (m_target);
}

void	RobotomyRequestForm::action() const
{
	std::cout << "Drilling goes Brrrrrr\n";
	srand(time(NULL));
	int randomValue = rand();
	if (randomValue % 2 == 0)
	{
		std::cout << m_target << " has been robotomized successfully!\n";
	}
	else
		std::cout << "Robotomy failed!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:01:58 by atamas            #+#    #+#             */
/*   Updated: 2025/03/10 14:29:41 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm *Intern::makePresidentialForm(const std::string targetName)
{
	PresidentialPardonForm *form = new PresidentialPardonForm(targetName);
	return (form);
}

AForm *Intern::makeRobotomyForm(const std::string targetName)
{
	RobotomyRequestForm *form = new RobotomyRequestForm(targetName);
	return (form);
}

AForm *Intern::makeShrubberyForm(const std::string targetName)
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(targetName);
	return (form);
}

Intern::Intern()
{

}

Intern::Intern(const Intern &original)
{
	if (this != &original)
	{
		
	}
}

Intern& Intern::operator =(const Intern &original)
{
	if (this != &original)
	{
		
	}
	return (*this);
}

Intern::~Intern()
{

}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	FormCreationFunction forms[3] = {&Intern::makeRobotomyForm, &Intern::makeShrubberyForm, &Intern::makePresidentialForm};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == formName)
		{
			std::cout << "Intern creates " << formName << "\n";
			return (this->*forms[i])(formTarget);
		}
	}
	std::cerr << "The form passed as parameter: " << formName << " doesn't exist!\n";
	return (NULL);
}

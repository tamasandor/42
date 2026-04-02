/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:37:41 by atamas            #+#    #+#             */
/*   Updated: 2025/03/10 14:28:54 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern test;
	AForm *etwas= test.makeForm("wrong", "test");
	AForm *ShrubberyCreationForm = test.makeForm("shrubbery creation", "test");
	AForm *PresidentialPardonForm = test.makeForm("presidential pardon", "test");
	AForm *RobotomyRequestForm = test.makeForm("robotomy request", "test");

	delete PresidentialPardonForm;
	delete RobotomyRequestForm;
	delete ShrubberyCreationForm;
	delete etwas;
}
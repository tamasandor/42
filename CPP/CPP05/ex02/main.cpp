/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:37:41 by atamas            #+#    #+#             */
/*   Updated: 2025/03/03 15:38:10 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	{
		ShrubberyCreationForm ShrubbForm("Schrubb Form");
		Bureaucrat CorruptBureaucrat("I can sign", 130);
		Bureaucrat NormalBureaucrat("I won't sign", 146);
		try
		{
			ShrubbForm.beSigned(NormalBureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			ShrubbForm.beSigned(CorruptBureaucrat);
			CorruptBureaucrat.executeForm(ShrubbForm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		PresidentialPardonForm PresidentForm("President Form");
		Bureaucrat CorruptBureaucrat("I can sign", 4);
		Bureaucrat NormalBureaucrat("I won't sign", 26);
		try
		{
			PresidentForm.beSigned(NormalBureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			PresidentForm.beSigned(CorruptBureaucrat);
			CorruptBureaucrat.executeForm(PresidentForm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		RobotomyRequestForm RobotForm("Robotomy Form");
		Bureaucrat CorruptBureaucrat("I can sign", 44);
		Bureaucrat NormalBureaucrat("I won't sign", 73);
		try
		{
			RobotForm.beSigned(NormalBureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			RobotForm.beSigned(CorruptBureaucrat);
			CorruptBureaucrat.executeForm(RobotForm);
			CorruptBureaucrat.executeForm(RobotForm);
			CorruptBureaucrat.executeForm(RobotForm);
			CorruptBureaucrat.executeForm(RobotForm);

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:37:44 by atamas            #+#    #+#             */
/*   Updated: 2025/03/03 15:28:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", 145, 137)
{
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : AForm(original.getName(), original.getGradeToSign(), original.getGradeToExecute())
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &original)
{
	if (this != &original)
	{
		this->m_target = original.m_target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file((m_target + "_shrubbery").c_str());
	file << "	oxoxoo    ooxoo\n";
	file << "	ooxoxo oo  oxoxooo\n";
	file << "   oooo xxoxoo ooo ooox\n";
	file << "   oxo o oxoxo  xoxxoxo\n";
	file << "	oxo xooxoooo o ooo\n";
	file << "	  ooo\\oo\\  /o/o\n";
	file << "		  \\  \\/ /\n";
	file << "		   |   /\n";
	file << "		   |  |\n";
	file << "		   | D|\n";
	file << "		   |  |\n";
	file << "		   |  |\n";
	file << "	______/____\\____\n";
}
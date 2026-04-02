/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:02:08 by atamas            #+#    #+#             */
/*   Updated: 2025/03/10 14:29:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
#define Intern_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef AForm* (Intern::*FormCreationFunction)(const std::string);

	AForm *makePresidentialForm(const std::string targetName);
	AForm *makeRobotomyForm(const std::string targetName);
	AForm *makeShrubberyForm(const std::string targetName);
public:
	Intern();
	Intern(const Intern &original);
	Intern& operator =(const Intern &original);
	~Intern();

AForm *makeForm(std::string formName, std::string formTarget);
};

#endif
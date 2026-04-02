/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:49 by atamas            #+#    #+#             */
/*   Updated: 2025/02/21 20:33:54 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "colors.hpp"

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
	if (m_gradeToSign < 1 || m_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (m_gradeToSign > 150 || m_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	m_signed = false;
}

AForm::AForm(const AForm &original) : m_name(original.m_name), m_gradeToSign(original.m_gradeToSign), m_gradeToExecute(original.m_gradeToExecute)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
}

AForm& AForm::operator =(const AForm &original)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
	return (*this);
}

AForm::~AForm()
{

}

std::string	AForm::getName() const
{
	return (m_name);
}

bool		AForm::getSignedState() const
{
	return (m_signed);
}

int	AForm::getGradeToSign() const
{
	return (m_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (m_gradeToExecute);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *AForm::FormIsSignedAlready::what() const throw()
{
	return ("Form is signed already");
}

const char *AForm::FormIsNotSigned::what() const throw()
{
	return ("Form is NOT signed");
}

std::ostream &operator <<(std::ostream &out, AForm &form)
{
	out << "Form: " << YELLOW400 << form.getName() << RESET << (form.getSignedState() ? (std::string(GREEN600) + " is signed " + RESET) : std::string(RED700) + " is not signed " + RESET)
			<< "required grade to sign: " << form.getGradeToSign() << " required grade to execute: "
			<< form.getGradeToExecute() << "\n";
	return (out);
}

void AForm::beSigned(Bureaucrat &kumpel)
{
	if (m_signed)
		throw AForm::FormIsSignedAlready();
	if (kumpel.getGrade() > m_gradeToSign)
		throw AForm::GradeTooLowException();
	m_signed = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!m_signed)
		throw AForm::FormIsNotSigned();
	else if (executor.getGrade() > m_gradeToExecute)
		throw AForm::GradeTooLowException();
	action();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:49 by atamas            #+#    #+#             */
/*   Updated: 2025/02/21 20:03:20 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "colors.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute)
{
	if (m_gradeToSign < 1 || m_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (m_gradeToSign > 150 || m_gradeToExecute > 150)
		throw Form::GradeTooLowException();
	m_signed = false;
}

Form::Form(const Form &original) : m_name(original.m_name), m_gradeToSign(original.m_gradeToSign), m_gradeToExecute(original.m_gradeToExecute)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
}

Form& Form::operator =(const Form &original)
{
	if (this != &original)
	{
		this->m_signed = original.m_signed;
	}
	return (*this);
}

Form::~Form()
{

}

std::string	Form::getName() const
{
	return (m_name);
}

bool		Form::getSignedState() const
{
	return (m_signed);
}

int	Form::getGradeToSign() const
{
	return (m_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (m_gradeToExecute);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::FormIsSignedAlready::what() const throw()
{
	return ("Form is signed already");
}

std::ostream &operator <<(std::ostream &out, Form &form)
{
	out << "Form: " << YELLOW400 << form.getName() << RESET << (form.getSignedState() ? (std::string(GREEN600) + " is signed " + RESET) : std::string(RED700) + " is not signed " + RESET)
			<< "required grade to sign: " << form.getGradeToSign() << " required grade to execute: "
			<< form.getGradeToExecute() << "\n";
	return (out);
}

void Form::beSigned(Bureaucrat &kumpel)
{
	if (m_signed)
		throw Form::FormIsSignedAlready();
	if (kumpel.getGrade() > m_gradeToSign)
		throw Form::GradeTooLowException();
	m_signed = true;
}

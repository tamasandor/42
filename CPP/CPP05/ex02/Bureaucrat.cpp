/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:32:57 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 23:07:09 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& original) : m_name(original.m_name)
{
	if (this != &original)
	{
		this->m_grade = original.m_grade;
	}
}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& original)
{
	if (this != &original)
	{
		this->m_grade = original.m_grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}


const std::string Bureaucrat::getName() const
{
	return (m_name);
}

int Bureaucrat::getGrade() const
{
	return (m_grade);
}

void	Bureaucrat::increase()
{
	if (m_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade--;
}

void	Bureaucrat::decrease()
{
	if (m_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

std::ostream &operator <<(std::ostream &out, Bureaucrat &burocreat)
{
	out << burocreat.getName() << ", bureaucrat grade " << burocreat.getGrade() << ".\n";
	return (out);
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << CYAN400 << m_name << RESET << GREEN500 << " signed " << RESET << form.getName() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << CYAN400 << m_name << RESET << RED500 << " couldn't sign " << RESET << form.getName() << " because " << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
		form.execute(*this);
}

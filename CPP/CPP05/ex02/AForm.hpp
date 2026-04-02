/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:47 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 23:02:27 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_hpp
#define FORM_hpp

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	m_name;
	bool				m_signed;
	const int			m_gradeToSign;
	const int			m_gradeToExecute;
public:
	AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
	AForm(const AForm &original);
	AForm &operator =(const AForm &original);
	virtual ~AForm();
	virtual void action() const = 0;

	class GradeTooHighException : public std::exception
	{
		virtual const char * what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class FormIsSignedAlready : public std::exception
	{
		virtual const char *what() const throw();
	};

	class FormIsNotSigned : public std::exception
	{
		virtual const char *what() const throw();
	};
	
	std::string	getName() const;
	bool		getSignedState() const;
	int	getGradeToSign() const;
	int	getGradeToExecute() const;
	void beSigned(Bureaucrat &kumpel);
	void execute(Bureaucrat const & executor) const;
};

std::ostream &operator <<(std::ostream &out, AForm &form);
#endif
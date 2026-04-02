/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 22:48:47 by atamas            #+#    #+#             */
/*   Updated: 2025/02/21 19:43:42 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_hpp
#define FORM_hpp

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	m_name;
	bool				m_signed;
	const int			m_gradeToSign;
	const int			m_gradeToExecute;
public:
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &original);
	Form &operator =(const Form &original);
	~Form();

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

	std::string	getName() const;
	bool		getSignedState() const;
	int	getGradeToSign() const;
	int	getGradeToExecute() const;
	void beSigned(Bureaucrat &kumpel);
};

std::ostream &operator <<(std::ostream &out, Form &form);
#endif
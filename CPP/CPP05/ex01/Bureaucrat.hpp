/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:32:51 by atamas            #+#    #+#             */
/*   Updated: 2025/02/21 19:43:59 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	m_name;
	int					m_grade;
public:
	Bureaucrat(std::string  const name, int grade);
	Bureaucrat(const Bureaucrat& original);
	Bureaucrat& operator =(const Bureaucrat& original);
	~Bureaucrat();
	const std::string 	getName() const;
	int 				getGrade() const;
	void				increase();
	void				decrease();
	void				signForm(Form& form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

};
std::ostream &operator <<(std::ostream &input, Bureaucrat &burocreat);

#endif

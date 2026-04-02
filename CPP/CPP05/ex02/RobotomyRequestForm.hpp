/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:23:59 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 22:24:00 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <iostream>

// class AForm;

class RobotomyRequestForm : public AForm
{
private:
	std::string m_target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &original);
	RobotomyRequestForm& operator =(const RobotomyRequestForm &original);
	~RobotomyRequestForm();

	std::string getTarget() const;
	void	action() const;
};

#endif

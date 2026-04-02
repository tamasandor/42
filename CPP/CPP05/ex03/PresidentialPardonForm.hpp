/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:26:28 by atamas            #+#    #+#             */
/*   Updated: 2025/02/25 22:29:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
private:
	std::string m_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &original);
	PresidentialPardonForm& operator =(const PresidentialPardonForm &original);
	~PresidentialPardonForm();
	std::string getTarget() const;
	void	action() const;
};

#endif

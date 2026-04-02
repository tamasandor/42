/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:33:41 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 16:37:45 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string m_type;
public:
	std::string	getType() const;
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &original);
	WrongAnimal &operator = (const WrongAnimal &original);
	~WrongAnimal();
	void	makeSound() const;
};

#endif

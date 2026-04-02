/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:21:08 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 23:23:03 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog: public Animal
{
private:
	Brain *m_brain;
public:
	Dog();
	Dog(const Dog &original);
	Dog &operator= (const Dog &original);
	~Dog();
	void	makeSound() const;
};

#endif

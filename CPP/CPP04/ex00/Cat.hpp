/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:22:16 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 23:22:09 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat(/* args */);
	Cat(const Cat &original);
	Cat &operator= (const Cat &original);
	~Cat();
	void	makeSound() const;
};

#endif

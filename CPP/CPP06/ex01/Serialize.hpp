/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:36:55 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 00:00:09 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
	std::string something;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize &);
		Serialize &operator=(Serialize &);
		~Serialize();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
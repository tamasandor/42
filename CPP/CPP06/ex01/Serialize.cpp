/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:36:53 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 00:08:07 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::Serialize(Serialize &original)
{
	if (this != &original)
	{
	}
}

Serialize &Serialize::operator=(Serialize &original)
{
	if (this != &original)
	{
	}
	return *this;
}

Serialize::~Serialize()
{
}


uintptr_t Serialize::serialize(Data *ptr)
{
	uintptr_t ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data* Serialize::deserialize(uintptr_t raw)
{
	Data *ret;

	ret = reinterpret_cast<Data *>(raw);
	return ret;
}


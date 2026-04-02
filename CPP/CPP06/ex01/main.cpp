/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:35:55 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 00:10:32 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()
{
	Data *disIsData = new Data;

	disIsData->something = "This is something";
	std::cout << "Data: " << disIsData->something << std::endl;

	uintptr_t serializedData = Serialize::serialize(disIsData);
	std::cout << "Serialized: " << serializedData << std::endl;
	
	disIsData = Serialize::deserialize(serializedData);
	std::cout << "Deserialized: " << disIsData->something << std::endl;

	delete disIsData;
	return 0;
}
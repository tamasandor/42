/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:35:18 by atamas            #+#    #+#             */
/*   Updated: 2025/02/10 23:19:31 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>


class Brain
{
private:
	std::string m_ideas[100];
public:
	Brain();
	Brain(const Brain &original);
	Brain &operator= (const Brain &original);
	~Brain();
};

#endif

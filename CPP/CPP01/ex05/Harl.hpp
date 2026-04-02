/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:25:57 by atamas            #+#    #+#             */
/*   Updated: 2024/10/24 17:17:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );
public:
	void	complain( std::string level);
	Harl();
	~Harl();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:13:42 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 22:35:13 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base *t = generate();
	Base *another = generate();
	identify(t);
	Base &ref = *t;
	Base &anotherRef = *another;
	identify(ref);
	identify(another);
	identify(anotherRef);
	delete t;
	delete another;
	return 0;
}
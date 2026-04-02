/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:28:12 by atamas            #+#    #+#             */
/*   Updated: 2025/04/28 22:34:19 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
}


Base *generate(void)
{
	static int seedVal = 0;
	seedVal++;
	srand(time(NULL) + seedVal);
	int	randomNumber = rand() % 3;

	if (randomNumber == 0)
		return new A;
	else if (randomNumber == 1)
		return new B;
	return new C;
}

void	identify(Base *p)
{
		if (dynamic_cast<A*>(p))
			std::cout << "Its class A" << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << "Its class B" << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << "Its class C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "Its class A reference" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "Its class B reference" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "Its class C reference" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


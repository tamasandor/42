/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:52:29 by atamas            #+#    #+#             */
/*   Updated: 2025/04/29 19:10:48 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

/* int	main()
{
	std::cout << "----TEST WITH INTEGERS----" << std::endl;
	int x = 42;
	int y = 21;

	std::cout << "current x: " << x << " and current y: " << y << std::endl;
	std::cout << "Min returns: " << min(x, y) << std::endl;
	std::cout << "Max returns: " << max(x, y) << std::endl;
	swap(x, y);
	std::cout << "after swap x: " << x << " and after swap y: " << y << std::endl;
	std::cout << "--------------------------" << std::endl;


	std::cout << "----TEST WITH STRING----" << std::endl;
	std::string xs = "First";
	std::string ys = "Second";
	std::cout << "current xs: " << xs << " and current ys: " << ys << std::endl;
	std::cout << "Min returns: " << min(xs, ys) << std::endl;
	std::cout << "Max returns: " << max(xs, ys) << std::endl;
	swap(xs, ys);
	std::cout << "after swap xs: " << xs << " and after swap ys: " << ys << std::endl;
	std::cout << "--------------------------" << std::endl;
} */

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
	}
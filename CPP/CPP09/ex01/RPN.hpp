/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:56:04 by atamas            #+#    #+#             */
/*   Updated: 2025/07/30 01:56:05 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
	private:
		bool isOperator(std::string examinable);
		std::stack<long int> _stack;
		void add();
		void minus();
		void times();
		void divide();
	public:
		RPN();
		RPN(std::string expression);
		RPN(const RPN& original);
		const RPN& operator=(const RPN& original);
		~RPN();
};

#endif
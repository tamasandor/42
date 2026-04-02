/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:56:15 by atamas            #+#    #+#             */
/*   Updated: 2025/07/30 01:56:16 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>

RPN::RPN()
{

}

RPN::RPN(std::string expression)
{
	std::cout << expression << "\n";
	std::string token;
	std::stringstream ss;
	ss << expression;
	while (getline(ss, token, ' '))
	{
		if (!isdigit(token[0]) && !isOperator(token))
			throw std::runtime_error("Error: Invalid expression " + token);
		if (isdigit(token[0]))
			_stack.push(std::atol(token.c_str()));
		else
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: Invalid expression " + expression);
			if (token == "+")
				add();
			if (token == "-")
				minus();
			if (token == "*")
				times();
			if (token == "/")
				divide();
		}
	}
	if (_stack.size() > 1)
		throw std::runtime_error("Error: Invalid expression " + expression);
	std::cout << _stack.top() << '\n';
}

RPN::RPN(const RPN& original)
{
	if (this != &original)
	{

	}
}

const RPN& RPN::operator=(const RPN& original)
{
	if (this != &original)
	{
		_stack = original._stack;
	}
	return *this;
}

RPN::~RPN()
{

}

bool RPN::isOperator(std::string examinable)
{
	if (examinable == "+" || examinable == "-"|| examinable == "*"|| examinable == "/")
			return true;
	return false;
}

void RPN::add()
{
	long int a = _stack.top();
	_stack.pop();
	long int b = _stack.top();
	_stack.pop();
	_stack.push(a + b);
}

void RPN::minus()
{
	long int a = _stack.top();
	_stack.pop();
	long int b = _stack.top();
	_stack.pop();
	_stack.push(b - a);
}

void RPN::times()
{
	long int a = _stack.top();
	_stack.pop();
	long int b = _stack.top();
	_stack.pop();
	_stack.push(a * b);
}

void RPN::divide()
{
	long int a = _stack.top();
	_stack.pop();
	long int b = _stack.top();
	_stack.pop();
	if (a == 0)
		throw std::runtime_error("Error: division by 0");
	_stack.push(b / a);
}
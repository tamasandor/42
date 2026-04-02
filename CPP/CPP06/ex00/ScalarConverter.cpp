/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 00:54:56 by atamas            #+#    #+#             */
/*   Updated: 2025/04/27 23:29:34 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <limits>

ScalarConverter::ScalarConverter()
{
};

ScalarConverter::ScalarConverter(const ScalarConverter &origin)
{
	if (this != &origin)
	{}
};


ScalarConverter& ScalarConverter::operator=(const ScalarConverter &origin)
{
	if (this != &origin)
	{}
	return *this;
};

ScalarConverter::~ScalarConverter()
{
};

t_Type detectType(const std::string &initial)
{
	size_t i = 0;

	if (initial[0] == '+' || initial[0] == '-')
		i++;
	for (; i < initial.length(); i++)
	{
		if (std::isdigit(initial[i]) == 0)
			break;
	}
	if (initial[i] == '\0')
		return (INT);
	if (initial.length() == 1)
		return (CHAR);
	if (initial[i] == '.')
		i++;
	for (; i < initial.length(); i++)
	{
		if (std::isdigit(initial[i]) == 0)
			break;
	}
	if (initial[i] == '\0')
		return (DOUBLE);
	else if (initial[i] == 'f')
		return (FLOAT);
	return (ERROR);
}

void printChar(const long int num)
{
	if (num < 0 || num > 126 || std::isprint(num) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
}

void printInt(const std::string &initial)
{
	long num;

	num = std::atol(initial.c_str());
	if (num < 0 || num > 126 || std::isprint(num) == 0)
	std::cout << "char: Non displayable" << std::endl;
	else
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;

	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;

	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;

	if (num > std::numeric_limits<double>::max() || num < std::numeric_limits<double>::min())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

void printFloat(const std::string &initial)
{
	float num;

	num = std::atof(initial.c_str());
	if (num < 0 || num > 126 || std::isprint(num) == 0)
	std::cout << "char: Non displayable" << std::endl;
	else
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;

	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;

	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;

	if (num > std::numeric_limits<double>::max() || num < std::numeric_limits<double>::min())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
	
}

void printDouble(const std::string &initial)
{
	double num;
	
	num = strtod(initial.c_str(), NULL);
	if (num < 0 || num > 126 || std::isprint(num) == 0)
	std::cout << "char: Non displayable" << std::endl;
	else
	std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;

	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;

	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;

	if (num > std::numeric_limits<double>::max() || num < std::numeric_limits<double>::min())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

bool pseudoLiteral(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		input[i] = std::tolower(input[i]);
	}
	if (input == "-inff" || input == "-inf" || input == "+inff" || input == "+inf" || input == "nanf" || input == "nan")
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: " << std::atof(input.c_str()) << 'f' << '\n';
		std::cout << "double: " << std::atof(input.c_str()) << '\n';
		return true;
	}
	return false;
}

void ScalarConverter::convert(const std::string &initial)
{
	if (pseudoLiteral(initial))
	return ;
	switch (detectType(initial))
	{
		case CHAR:
			printChar(initial[0]);
			std::cout << "int: " << static_cast<int>(initial[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(initial[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(initial[0]) << ".0" << std::endl;
			break;
		case INT:
			printInt(initial);
			break;
		case FLOAT:
			printFloat(initial);
			break;
		case DOUBLE:
			printDouble(initial);
			break;
		case ERROR:
			std::cerr << "Incorrect type!" << std::endl;
			break;
	}
};

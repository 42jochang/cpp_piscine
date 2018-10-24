/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:38:20 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 10:43:47 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.hpp"

static Fixed	getFixed(char **x)
{
	Fixed num = std::atof(*x);
	while (isdigit(**x) || **x == '.')
		(*x)++;
	return (num);
}

Fixed	parseFactor(char **x)
{
	Fixed	num = 0;

	if (isdigit(**x) || **x == '-')
		num = getFixed(x);
	else if (**x == '(')
	{
		(*x)++;
		num = parseSum(x);
		if (**x == ')')
			(*x)++;
	}
	else
	{
		PRINT("Error: Invalid Expression");
		exit(1);
	}
	return (num);
}

Fixed	parseProduct(char **x)
{
	char	sign;

	Fixed	a = parseFactor(x);
	while (**x == '*' || **x == '/')
	{
		sign = **x;
		(*x)++;
		Fixed	b = parseFactor(x);
		if (sign == '*')
			a = a * b;
		else if (sign == '/')
		{
			if (b == 0)
			{
				PRINT("Error: cannot divide by 0");
				exit(1);
			}
			a = a / b;
		}
	}
	return (a);
}

Fixed	parseSum(char **x)
{
	Fixed	a = parseProduct(x);
	while (**x == '+' || **x == '-')
	{
		char sign = **x;
		(*x)++;
		Fixed	b = parseProduct(x);
		if (sign =='+')
			a = a + b;
		else if (sign == '-')
			a = a - b;
	}
	return (a);
}

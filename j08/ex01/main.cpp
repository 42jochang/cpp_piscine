/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:49:50 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 18:49:59 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH	catch (std::exception &e) { PRINT(e.what()); }

int main()
{
	Span	s(5);
	try
	{
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
		s.addNumber(5);
		PRINT("added 5 objects");
		s.addNumber(6);
	}
	CATCH;
	try
	{
		PRINT(s.shortestSpan());
		PRINT(s.longestSpan());
	}
	CATCH;

	Span big(10000);
	try
	{
		big.addRange(0, 9999);
		PRINT(big.longestSpan());
	}
	CATCH;

	return (0);
}

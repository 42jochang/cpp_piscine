/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:42:19 by jochang           #+#    #+#             */
/*   Updated: 2018/10/11 18:46:02 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define PRINT(x) std::cout << x << std::endl

int main()
{
	Array<std::string> str(3);
	PRINT(str.size());
	str[0] = "hello";
	str[1] = "there";
	str[2] = "world";
	for (unsigned int i = 0;i < str.size();i++)
		PRINT(str[i]);

	Array<int> num(5);
	PRINT(num.size());
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	num[3] = 3;
	num[4] = 4;
	try
	{
		for (unsigned int i = 0;i < num.size() + 1;i++)
			PRINT(num[i]);
	}
	catch (std::exception &e)
	{
		PRINT(e.what());
	}
	return(0);
}

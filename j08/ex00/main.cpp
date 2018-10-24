/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:07:06 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 21:08:51 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

#define PRINT(x) std::cout << x << std::endl;
#define CATCH catch (std::exception &e) { PRINT(e.what()); }

int main()
{
	std::vector<int> v;
	for (int i = 0;i < 10;i++)
		v.push_back(i);
	try
	{
		PRINT(easyfind(v, 5));
		PRINT(easyfind(v, 10));
	}
	CATCH;
	return (0);
}

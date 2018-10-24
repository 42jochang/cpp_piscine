/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:42:14 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 18:35:48 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int main()
{
	CentralBureaucracy central;

	std::string name[] = {
		"Andy", "Ryan", "Steven", "Dylan", "Liz",
		"Jo", "Jamie", "Alex" };
	std::string target[] = {
		"dog", "cat", "mouse", "deer", "horse", "snake",
		"moo", "chicken" };
	for (int i = 0;i < 40;i++)
	{
		try
		{
			Bureaucrat tmp(name[rand() % 8], (rand() % 149) + 1);
			central.feedBureaucrat(tmp);
		}
		CATCH;
	}
	for (int i = 0;i < 50;i++)
		central.queueUp(target[rand() % 8]);
	central.doBureaucracy();
	return (0);
}
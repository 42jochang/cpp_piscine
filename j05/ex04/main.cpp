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

#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat nope = Bureaucrat("Failure", 150);
	OfficeBlock ob;
	
	ob.setIntern(idiotOne);
	try
	{
		ob.doBureaucracy("shrubbery", "Pigley");
	}
	CATCH;
	ob.setSigner(nope);
	try
	{
		ob.doBureaucracy("shrubbery", "Pigley");
	}
	CATCH;
	ob.setSigner(hermes);
	try
	{
		ob.doBureaucracy("shrubbery", "Pigley");
	}
	CATCH;
	ob.setExecutor(nope);
	try
	{
		ob.doBureaucracy("shrubbery", "Pigley");
	}
	CATCH;
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("pardon", "Pigley");
	}
	CATCH;
	return (0);
}
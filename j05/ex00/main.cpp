/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:42:14 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 20:51:49 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Bureaucrat a = Bureaucrat("Allan", 1);
	Bureaucrat b = Bureaucrat("Bill", 150);
	PRINT(a);
	PRINT(b);
	try
	{
		Bureaucrat c = Bureaucrat("Cat", 151);
		PRINT("Mistakes have been made");
	}
	CATCH;
	try { a.upGrade(); }
	CATCH;
	try { b.downGrade(); }
	CATCH;
	try
	{
		a.downGrade();
		PRINT(a.getGrade());
	}
	CATCH;
	return (0);
}

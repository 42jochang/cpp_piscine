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

#include "Form.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	try { Bureaucrat d = Bureaucrat("Dan", 200); }
	CATCH;
	Bureaucrat a = Bureaucrat("Allan", 1);
	Bureaucrat b = Bureaucrat("Bill", 150);
	Bureaucrat c = Bureaucrat("Charlie", 50);
	
	Form form = Form("public", 50, 20);
	PRINT(a);
	PRINT(b);
	PRINT(c);
	PRINT(form);
	b.signForm(form);
	PRINT(form);
	c.signForm(form);
	PRINT(form);
	return (0);
}

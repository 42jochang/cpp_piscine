/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:42:14 by jochang           #+#    #+#             */
/*   Updated: 2018/10/09 15:37:57 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Intern intern;

	Form* sf;
	Form* rf;
	Form* pf;
	Form* nf;
	try
	{
		sf = intern.makeForm("shrubbery", "shrubs");
		rf = intern.makeForm("robotomy", "robots");
		pf = intern.makeForm("pardon", "everyone");
		nf = intern.makeForm("invalid", "form");
	}
	CATCH;
	return (0);
}

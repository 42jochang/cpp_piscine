/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 08:33:00 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 10:30:23 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.hpp"


Fixed	eval_expr(char *expr)
{
	Fixed	calc;

	calc = parseSum(&expr);
	return (calc);
}

int	main(int ac, char **av)
{
	char	*str;
	if (ac == 2)
	{
		str = av[1];
		checkInput(str);
		str = cleanSpaces(str);
		PRINT(eval_expr(str));
	}
	else
		PRINT("usage: ./eval_expr [argument string]");
	return (0);
}

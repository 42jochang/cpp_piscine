/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:01:09 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 10:32:25 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.hpp"

void	checkInput(char *s)
{
	bool	inv = false;
	int		brackets = 0;

	for (size_t i = 0;i < strlen(s);i++)
	{
		if (!isdigit(s[i]) && !isspace(s[i]) &&
				s[i] != '.' && s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
		{
			if (s[i] == '(')
				brackets++;
			else if (s[i] == ')')
				brackets--;
			else
				inv = true;
		}
		if (brackets < 0)
			inv = true;
	}
	if (inv)
	{
		PRINT("Invalid Expression");
		exit(1);
	}
}

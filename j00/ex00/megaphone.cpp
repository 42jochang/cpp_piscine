/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 08:51:32 by jochang           #+#    #+#             */
/*   Updated: 2018/10/02 13:05:31 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

std::string	str_toupper(std::string str)
{
	unsigned long	i = -1;

	while (++i < str.length())
		str[i] = toupper(str[i]);
	return (str);
}

int			main(int ac, char **av)
{
	int	i = 0;

	if (ac > 1)
		while (++i < ac)
			std::cout << str_toupper(av[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}

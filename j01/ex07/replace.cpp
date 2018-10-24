/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 06:11:04 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 06:31:37 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	name = av[1];
		std::string old = av[2];
		std::string	n = av[3];

		std::ifstream is(name);
		if (!is)
		{
			std::cout << name << " does not exist" << std::endl;
			return (-1);
		}
		std::ofstream os(name + ".replace");
		if (!os) return (-2);
		
		std::string	s;
		while (std::getline(is, s))
		{
			for (size_t p = s.find(old); p != std::string::npos; p = s.find(old, p))
				s.replace(p, old.length(), n);
			os << s << std::endl;
		}
	}
	else
		std::cout << "usage: ./replace [file_name] string_1 string_2" << std::endl;
	return (0);
}

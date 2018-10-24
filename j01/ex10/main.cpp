/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 08:36:38 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 09:15:40 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

bool is_dir(const char* path)
{
    struct stat buf;
    stat(path, &buf);
    return (S_ISDIR(buf.st_mode));
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		for (std::string s;std::getline(std::cin, s);)
			std::cout << s << std::endl;
	}
	else
	{
		std::ifstream fd;
		for (int i = 1;i < ac;i++)
		{
			if (is_dir(av[i]))
				std::cout << "cato9tails: " << av[i] << ": Is a directory" << std::endl;
			else
			{
				errno = 0;
				fd.open(av[i]);
				if (errno)
					std::cout << "cato9tails: " << av[i] << ": " << std::strerror(errno) << std::endl;
				else
				{
					for(std::string s;std::getline(fd, s);)
						std::cout << s << std::endl;
					fd.close();
				}
			}
		}
	}
	return (0);
}

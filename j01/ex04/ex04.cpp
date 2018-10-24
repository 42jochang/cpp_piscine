/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 03:45:18 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 03:54:45 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*ptr = &brain;
	std::string	&ref = brain;

	std::cout << "pointer to " << *ptr << std::endl;
	std::cout << "reference to " << ref << std::endl;
	return (0);
}

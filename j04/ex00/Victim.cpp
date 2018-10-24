/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:29:07 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:25:31 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

#define PRINT(x) std::cout << x << std::endl

Victim::Victim(std::string name) : _name(name)
{
	PRINT("Some random victim called " << name << " just popped !");
}

Victim::Victim(const Victim &cpy)
{
	*this = cpy;
	PRINT("Some random victim called " << _name << " just popped !");
}
Victim::~Victim(void)
{
	PRINT("Victim " << _name << " just died for no apparent reason !");
}

Victim&	Victim::operator = (const Victim &old)
{
	_name = old.getname();
	return (*this);
}

std::string	Victim::getname(void) const { return (_name); }

void	Victim::getPolymorphed(void) const
{
	PRINT(_name << " has been turned into a cute little sheep !");
}

std::ostream	&operator << (std::ostream &output, Victim const &old)
{
	output << "I'm " << old.getname() << " and I like otters !\n";
	return (output);
}

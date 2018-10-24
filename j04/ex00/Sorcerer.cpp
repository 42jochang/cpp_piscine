/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:59:20 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:47:30 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

#define PRINT(x) std::cout << x << std::endl;

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	PRINT(name << ", " << title << ", is born !");
}

Sorcerer::Sorcerer(const Sorcerer &cpy)
{
	*this = cpy;
	PRINT(name << ", " << title << ", is born !");
}

Sorcerer::~Sorcerer(void)
{
	PRINT(_name << ", " << _title << ", is dead. Consequences will never be the same!");
}

Sorcerer&	Sorcerer::operator = (const Sorcerer &old)
{
	_name = old.getname();
	_title = old.gettitle();
	return (*this);
}

std::string	Sorcerer::getname(void)		const		{ return (_name); }
std::string	Sorcerer::gettitle(void)	const		{ return (_title); }
void		Sorcerer::polymorph(Victim const &v)	{ v.getPolymorphed(); }

/* Non Member Functions */
std::ostream	&operator << (std::ostream &output, Sorcerer const &old)
{
	output << "I am " << old.getname() << ", " << old.gettitle()
		<< ", and I like ponies !\n";
	return (output);
}

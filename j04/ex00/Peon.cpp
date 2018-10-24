/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:56:52 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:47:59 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

#define SAY(x) std::cout << x << std::endl;

Peon::Peon(std::string name) : Victim(name)
{
	SAY("Zog zog");
}

Peon::Peon(const Peon &cpy) : Victim (cpy)
{
	*this = cpy;
	SAY("Zog zog");
}
Peon::~Peon(void) { SAY("Bleuark..."); }

void	Peon::getPolymorphed(void) const
{
	SAY(_name << " has been turned into a pink pony !");
}

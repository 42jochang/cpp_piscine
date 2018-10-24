/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:56:52 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:48:25 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Mob.hpp"

#define SAY(x) std::cout << x << std::endl;

Mob::Mob(std::string name) : Victim(name)
{
	SAY("I'm part of the mob");
}

Mob::Mob(const Mob &cpy) : Victim (cpy)
{
	*this = cpy;
	SAY("I'm part of the mob");
}

Mob::~Mob(void) { SAY("The mob will rise again"); }

void	Mob::getPolymorphed(void) const
{
	SAY(_name << " has been turned into cake !");
}

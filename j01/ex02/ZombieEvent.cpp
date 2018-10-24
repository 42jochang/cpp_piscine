/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:23:55 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 02:32:04 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	_type = "default";
}

ZombieEvent::~ZombieEvent(void) { }

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
};

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name, _type);
	return (zombie);
}

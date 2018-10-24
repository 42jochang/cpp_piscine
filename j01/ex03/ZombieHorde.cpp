/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 02:38:50 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 03:43:07 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _num(n)
{
	_zombies = new Zombie[n]();
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		_zombies[i] = createRand();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _zombies;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _num; i++)
		_zombies[i].announce();
	return;
}

Zombie&	ZombieHorde::createRand(void)
{
	std::string	name[6] = {"Ann", "Bill", "Carol", "Dave", "Elliot", "Fin"};
	Zombie *zombie = new Zombie(name[rand() % 6], "horde");
	return (*zombie);
}

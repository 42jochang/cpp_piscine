/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:54:43 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:07:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

#define PRINT(x) std::cout << x << std::endl

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	PRINT("Gaaah. Me want smash heads !");
}

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy)
{
	PRINT("Gaaah. Me want smash heads !");
}

SuperMutant::~SuperMutant(void)
{
	PRINT("Aaargh...");
}

void	SuperMutant::takeDamage(int dmg)
{
	_hp = _hp - (dmg - 3) > 0 ? _hp - (dmg - 3) : 0;
}

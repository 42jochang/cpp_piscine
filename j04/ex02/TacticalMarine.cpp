/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 05:19:27 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 06:16:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

#define PRINT(x) std::cout << x << std::endl;

TacticalMarine::TacticalMarine(void) { PRINT("Tactical Marine ready for battle"); }
TacticalMarine::TacticalMarine(const TacticalMarine &cpy)
{
	(void)cpy;
	PRINT("Tactical Marine ready for battle");
}
TacticalMarine::~TacticalMarine(void) { PRINT("Aaargh ..."); }

TacticalMarine& TacticalMarine::operator = (const TacticalMarine &old)
{
	(void)old;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone(void)	const
{
	return (new TacticalMarine(*this));
}

void	TacticalMarine::battleCry(void)		const { PRINT("For the holy PLOT !"); }
void	TacticalMarine::rangedAttack(void)	const { PRINT("* attacks with bolter *"); }
void	TacticalMarine::meleeAttack(void)	const { PRINT("* attacks with chainsword *"); }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 05:19:27 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 06:11:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"

#define PRINT(x) std::cout << x << std::endl;

AssaultTerminator::AssaultTerminator(void) { PRINT("* teleports from space *"); }
AssaultTerminator::AssaultTerminator(const AssaultTerminator &cpy)
{
	(void)cpy;
	PRINT("* teleports from space *");
}
AssaultTerminator::~AssaultTerminator(void) { PRINT("I'll be back ..."); }

AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator &old)
{
	(void)old;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone(void)	const
{
	return (new AssaultTerminator(*this));
}

void	AssaultTerminator::battleCry(void)		const { PRINT("This code is unclean. PURIFY IT !"); }
void	AssaultTerminator::rangedAttack(void)	const { PRINT("* does nothing *"); }
void	AssaultTerminator::meleeAttack(void)	const { PRINT("* attacks with chainfists *"); }

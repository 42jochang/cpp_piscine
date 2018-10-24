/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:12:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 10:09:43 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#define PRINT(x) std::cout << x << std::endl

Ice::Ice(void) : AMateria("ice") { }
Ice::Ice(const Ice &cpy) : AMateria(cpy) { }
Ice::~Ice(void) { }

Ice&	Ice::operator = (const Ice &old)
{
	_xp = old.getXP();
	return (*this);
}

AMateria	*Ice::clone(void)	const
{
	AMateria	*clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter & target)
{
	PRINT("* shoots an ice bolt at " << target.getName() << " *");
}

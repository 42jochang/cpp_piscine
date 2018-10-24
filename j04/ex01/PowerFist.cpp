/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:20:27 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 01:30:42 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) { }
PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy) { }
PowerFist::~PowerFist(void) { }

void	PowerFist::attack(void) const
{
	std::cout << "“* pschhh... SBAM! *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:44:18 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 05:58:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) { };
HumanA::~HumanA(void) { };

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

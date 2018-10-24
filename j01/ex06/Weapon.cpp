/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:03:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 05:10:09 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { };
Weapon::~Weapon(void) { };

std::string	Weapon::getType(void) const			{ return (_type); }
void		Weapon::setType(std::string type)	{ _type = type; }

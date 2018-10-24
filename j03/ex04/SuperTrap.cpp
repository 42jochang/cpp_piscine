/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:48:09 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:40:20 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)	
{
	_name = name;
	_hp = FragTrap::gethp();
	_mhp = _hp;
	_ep = NinjaTrap::getep();
	_mep = _ep;
	_lvl = 1;
	_mad = NinjaTrap::getmad();
	_rad = FragTrap::getrad();
	_adr = FragTrap::getadr();
	SAY("SUUUUUUUPPPPPPEERRRR TRAPPPPP");
}
SuperTrap::SuperTrap(void) { }
SuperTrap::SuperTrap(const SuperTrap &cpy) : FragTrap(cpy), NinjaTrap(cpy)
{ *this = cpy; }
SuperTrap::~SuperTrap(void) { SAY("My job is done"); }

SuperTrap&	SuperTrap::operator = (const SuperTrap &old)
{
	_name = old.getname();
	_hp = old.gethp();
	_ep = old.getep();
	_lvl = old.getlvl();
	SAY ("I'M NOT OLD");
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:34:52 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 02:49:14 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage) { }
AWeapon::AWeapon(const AWeapon &cpy) { *this = cpy; }
AWeapon::~AWeapon(void) { }
AWeapon&	AWeapon::operator = (const AWeapon &old)
{
	_name = old.getName();
	_apcost = old.getAPCost();
	_damage = old.getDamage();
	return (*this);
}

std::string const &	AWeapon::getName(void)		const { return (_name); }
int					AWeapon::getAPCost(void)	const { return (_apcost); }
int					AWeapon::getDamage(void)	const { return (_damage); }

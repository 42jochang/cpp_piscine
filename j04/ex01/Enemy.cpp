/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:42:33 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:02:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) { }
Enemy::Enemy(const Enemy &cpy) { *this = cpy; }
Enemy::~Enemy(void) { }
Enemy&	Enemy::operator = (const Enemy &old)
{
	_hp = old.getHP();
	_type = old.getType();
	return (*this);
}

std::string const &	Enemy::getType(void)	const { return (_type); }
int					Enemy::getHP(void)		const { return (_hp); }

void	Enemy::takeDamage(int dmg) { _hp = _hp - dmg > 0 ? _hp - dmg : 0; }

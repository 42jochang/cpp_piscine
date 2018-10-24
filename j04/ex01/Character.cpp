/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 02:05:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:14:02 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) :
	_name(name), _ap(40), _weapon(NULL) { }
Character::Character(const Character &cpy) { *this = cpy; }
Character::~Character(void) { }
Character&	Character::operator = (const Character &old)
{
	_name = old.getName();
	_ap = old.getAp();
	_weapon = old.getWeapon();
	return (*this);
}

std::string const &	Character::getName(void)	const	{ return (_name); }
int					Character::getAp(void)		const	{ return (_ap); }
AWeapon*			Character::getWeapon(void)	const	{ return (_weapon); }

void	Character::recoverAP(void)		{ _ap = _ap + 10 > 40 ? 40 : _ap + 10; }
void	Character::equip(AWeapon *w)	{ _weapon = w; }

void	Character::attack(Enemy *e)
{
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		std::cout << _name << " attacks " << e->getType() << " with a "
			<< _weapon->getName() << std::endl;
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() == 0)
			delete e;
	}
}

std::ostream &operator << (std::ostream &output, Character const &old)
{
	if (old.getWeapon())
		output << old.getName() << " has "<< old.getAp() << " AP and wields a "
			<< old.getWeapon()->getName() << std::endl;
	else
		output << old.getName() << " has " << old.getAp() << " AP and is unarmed"
			<< std::endl;
	return output;
}

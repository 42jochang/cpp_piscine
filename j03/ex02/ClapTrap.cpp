/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:40:15 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:29:37 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Canonical Member Functions */
ClapTrap::ClapTrap(std::string name) : _name(name)
{
	SAY("Directive one: Protect humanity!\n"\
		<< "Directive two: Obey Jack at all costs.\n"\
		<< "Directive three: Dance!\n");
}
ClapTrap::ClapTrap(void) { }
ClapTrap::ClapTrap(const ClapTrap &cpy) { *this = cpy; }
ClapTrap::~ClapTrap(void) { SAY("I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"); }

/* Operator Overloads */
ClapTrap& ClapTrap::operator = (const ClapTrap &old)
{
	_name = old.getname();
	_hp = old.gethp();
	_ep = old.getep();
	_lvl = old.getlvl();
	SAY("The robot is dead, long live the robot!");
	return (*this);
}

/* Get Functions */
std::string	ClapTrap::getname(void)	const	{ return (_name); }
int			ClapTrap::gethp(void)	const	{ return (_hp); }
int			ClapTrap::getep(void)	const	{ return (_ep); }
int			ClapTrap::getlvl(void)	const	{ return (_lvl); }

/* Member Functions */
void	ClapTrap::rangedAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " at range, causing "
		<< _rad << " points of damage !");
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " by punching, causing "
		<< _mad << " points of damage !");
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	amount = _hp - (int)amount < 0 ? _hp : amount;
	_hp -= amount;
	SAY(amount << " damage taken");
}

void   ClapTrap::beRepaired(unsigned int amount)
{
	amount = _hp + (int)amount > _mhp ? _mhp - _hp : _hp + amount;
	_hp += amount;
	SAY(amount << " health healed");
}

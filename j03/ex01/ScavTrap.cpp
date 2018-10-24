/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:01:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:28:16 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define SAY(x) (std::cout << _name << ": " << x << std::endl)
#define CHAL_EXE  { "Shoot the moon down",\
					"Dance until the end of time",\
					"Collect all the dragon balls",\
					"Donate to my gambling addiction",\
					"Backup your memory"}
#define CHAL_NUM 5

/* Canonical Member Functions */
ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _mhp(100), _ep(50),\
									   _mep(50), _lvl(1), _mad(20), _rad(15), _adr(3)
{
	_mep = 50;
	SAY("Hey everybody! Check out my package!");
	srand(time(NULL));
}
ScavTrap::ScavTrap(void) { }
ScavTrap::ScavTrap(const ScavTrap &cpy) { *this = cpy; }
ScavTrap::~ScavTrap(void) { SAY("I'll get you next time!"); }

/* Operator Overloads */
ScavTrap& ScavTrap::operator = (const ScavTrap &old)
{
	_name = old.getname();
	_hp = old.gethp();
	_ep = old.getep();
	_lvl = old.getlvl();
	SAY("I am so impressed with myself!");
	return (*this);
}

/* Get Functions */
std::string	ScavTrap::getname(void) const	{ return (_name); }
int			ScavTrap::gethp(void)	const	{ return (_hp); }
int			ScavTrap::getep(void)	const	{ return (_ep); }
int			ScavTrap::getlvl(void)	const	{ return (_lvl); }

/* Member Functions */
void	ScavTrap::rangedAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " at range, causing "
		<< _rad << " points of damage !");
	SAY("All these bullets in just one shot");
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " by punching, causing "
			<< _mad << " points of damage !");
	SAY("I have two robot arms!");
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	amount = _hp - (int)amount < 0 ? _hp : amount;
	_hp -= amount;
	if (_hp == 0)
		SAY("Robot down!");
	else
		SAY("You can't kill me!");
	SAY(amount << " damage taken");
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	amount = _hp + (int)amount > _mhp ? _mhp - _hp : _hp + amount;
	_hp += amount;
	SAY("Hahaha... I ascend!");
	SAY(amount << " health healed");
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	chal[] = CHAL_EXE;
	SAY(target << ", " << chal[rand() % CHAL_NUM]);
}

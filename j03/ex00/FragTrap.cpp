/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:01:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:26:31 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define SAY(x) (std::cout << _name << ": " << x << std::endl)
#define ATTACK_EXE { "Funzerker",\
					"Meat Unicycle",\
					"Mechromagician",\
					"Senseless Sacrifice",\
					"Clap-in-the-Box"}
#define ATTACK_NUM 5

/* Canonical Member Functions */
FragTrap::FragTrap(std::string name) : _name(name), _hp(100), _mhp(100), _ep(100),\
									   _mep(100), _lvl(1), _mad(30), _rad(20), _adr(5)
{
	_mep = 100;
	SAY("Recompiling my combat code!");
	srand(time(NULL));
}
FragTrap::FragTrap(void) { }
FragTrap::FragTrap(const FragTrap &cpy) { *this = cpy; }
FragTrap::~FragTrap(void) { SAY("I'll die the way I lived: annoying!"); }

/* Operator Overloads */
FragTrap& FragTrap::operator = (const FragTrap &old)
{
	_name = old.getname();
	_hp = old.gethp();
	_ep = old.getep();
	_lvl = old.getlvl();
	SAY("This time it'll be awesome, I promise!");
	return (*this);
}

/* Get Functions */
std::string	FragTrap::getname(void) const	{ return (_name); }
int			FragTrap::gethp(void)	const	{ return (_hp); }
int			FragTrap::getep(void)	const	{ return (_ep); }
int			FragTrap::getlvl(void)	const	{ return (_lvl); }

/* Member Functions */
void	FragTrap::rangedAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " at range, causing "
		<< _rad << " points of damage !");
	SAY("Grenaaaade!");
}

void	FragTrap::meleeAttack(std::string const & target)
{
	SAY(_name << " attacks " << target << " by punching, causing "
			<< _mad << " points of damage !");
	SAY("Bop!");
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= _adr;
	amount = _hp - (int)amount < 0 ? _hp : amount;
	_hp -= amount;
	if (_hp == 0)
		SAY("Argh arghargh death gurgle gurglegurgle urgh... death.");
	else
		SAY("Why do I even feel pain?!");
	SAY(amount << " damage taken");
}

void	FragTrap::beRepaired(unsigned int amount)
{
	amount = _hp + (int)amount > _mhp ? _mhp - _hp : _hp + amount;
	_hp += amount;
	SAY("Ha ha ha! I LIVE! Hahaha!");
	SAY(amount << " health healed");
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attacks[] = ATTACK_EXE;
	if (_ep >= 25)
	{
		_ep -= 25;
		SAY("accesses vaulthunter.exe to activate " << attacks[rand() % ATTACK_NUM]\
				<< " on " << target);
	}
	else
		SAY("I need tiny death pellets!");
}

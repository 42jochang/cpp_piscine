/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:01:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 19:55:56 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define ATTACK_EXE { "Funzerker",\
					"Meat Unicycle",\
					"Mechromagician",\
					"Senseless Sacrifice",\
					"Clap-in-the-Box"}
#define ATTACK_NUM 5

/* Canonical Member Functions */
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_mhp = 100;
	_ep = 100;
	_mep = 100;
	_lvl = 1;
	_mad = 30;
	_rad = 20;
	_adr = 5;
	SAY("Recompiling my combat code!");
	srand(time(NULL));
}
FragTrap::FragTrap(void) { }
FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy) { *this = cpy; }
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

/* Member Functions */
void	FragTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	SAY("Grenaaaade!");
}

void	FragTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	SAY("Bop!");
}

void	FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	if (_hp == 0)
		SAY("Argh arghargh death gurgle gurglegurgle urgh... death.");
	else
		SAY("Why do I even feel pain?!");
}

void	FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	SAY("Ha ha ha! I LIVE! Hahaha!");
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

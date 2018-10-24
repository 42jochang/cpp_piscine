/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 11:01:11 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:40:10 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define CHAL_EXE  { "Shoot the moon down",\
					"Dance until the end of time",\
					"Collect all the dragon balls",\
					"Donate to my gambling addiction",\
					"Backup your memory"}
#define CHAL_NUM 5

/* Canonical Member Functions */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_mhp = 100;
	_ep = 50;
	_mep = 50;
	_lvl = 1;
	_mad = 20;
	_rad = 15;
	_adr = 3;
	SAY("Hey everybody! Check out my package!");
	srand(time(NULL));
}
ScavTrap::ScavTrap(void) { }
ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) { *this = cpy; }
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

/* Member Functions */
void	ScavTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	SAY("All these bullets in just one shot");
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	SAY("I have two robot arms!");
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	if (_hp == 0)
		SAY("Robot down!");
	else
		SAY("You can't kill me!");
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	SAY("Hahaha... I ascend!");
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	chal[] = CHAL_EXE;
	SAY(target << ", " << chal[rand() % CHAL_NUM]);
}

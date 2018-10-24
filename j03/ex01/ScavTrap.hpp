/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:50:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:28:37 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class ScavTrap
{
private:
	/* Variables */
	std::string	_name;
	int			_hp;
	int			_mhp;
	int			_ep;
	int			_mep;
	int			_lvl;
	int			_mad;
	int			_rad;
	int			_adr;

public:
	/* Canonical Member Functions */
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	~ScavTrap(void);

	/* Operator Overloads */
	ScavTrap&	operator = (const ScavTrap &old);

	/* Get Functions */
	std::string	getname(void) const;
	int			gethp(void) const;
	int			getep(void) const;
	int			getlvl(void) const;

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:52:53 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:29:49 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

#define SAY(x) (std::cout << _name << ": " << x << std::endl)

class	ClapTrap
{
protected:
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
	ClapTrap(void);
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &cpy);
	~ClapTrap(void);

	/* Operator Overloads */
	ClapTrap&	operator = (const ClapTrap &old);

	/* Get Functions */
	std::string	getname(void)	const;
	int			gethp(void)		const;
	int			getep(void)		const;
	int			getlvl(void)	const;

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif

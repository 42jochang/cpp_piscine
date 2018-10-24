/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:50:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:26:01 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class FragTrap
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
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	~FragTrap(void);

	/* Operator Overloads */
	FragTrap&	operator = (const FragTrap &old);

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
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif

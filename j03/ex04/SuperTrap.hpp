/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:47:04 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 02:09:35 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
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
	SuperTrap(void);
	SuperTrap(std::string);
	SuperTrap(const SuperTrap &cpy);
	~SuperTrap(void);

	/* Operator Overloads */
	SuperTrap&	operator = (const SuperTrap &old);
	using	NinjaTrap::meleeAttack;
	using	FragTrap::rangedAttack;
	using	FragTrap::gethp;
	using	NinjaTrap::getep;
	using	NinjaTrap::getmad;
	using	FragTrap::getrad;
	using	FragTrap::getadr;
};

#endif

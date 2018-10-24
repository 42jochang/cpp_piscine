/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:50:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 03:30:51 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	/* Canonical Member Functions */
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	~ScavTrap(void);

	/* Operator Overloads */
	ScavTrap&	operator = (const ScavTrap &old);

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
};

#endif

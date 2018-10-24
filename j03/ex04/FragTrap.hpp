/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:50:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 01:34:39 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	int _hp;
	int _mhp;
	int _rad;
	int _adr;
public:
	/* Canonical Member Functions */
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	~FragTrap(void);

	/* Operator Overloads */
	FragTrap&	operator = (const FragTrap &old);
	
	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	int		gethp(void) const;
	int		getrad(void) const;
	int		getadr(void) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif

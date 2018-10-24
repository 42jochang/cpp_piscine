/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:01:37 by jochang           #+#    #+#             */
/*   Updated: 2018/10/05 01:35:38 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
private:
	int _ep;
	int _mep;
	int _mad;
public:
	/* Canonical Member Functions */
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &cpy);
	~NinjaTrap(void);

	/* Operator Overloads */
	NinjaTrap&       operator = (const NinjaTrap &old);

	/* Member Functions */
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	int		getep(void) const;
	int		getmad(void) const;
	void	ninjaShoebox(ClapTrap const & target);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
};

#endif

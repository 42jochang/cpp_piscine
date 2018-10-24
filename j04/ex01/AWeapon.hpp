/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:34:55 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 01:46:12 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class	AWeapon
{
protected:
	std::string	_name;
	int			_apcost;
	int			_damage;

public:
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &cpy);
	virtual ~AWeapon(void);

	AWeapon&	operator = (const AWeapon &old);

	std::string const &	getName(void)	const;
	int					getAPCost(void)	const;
	int					getDamage(void)	const;

	virtual void 		attack()	const = 0;
};

#endif

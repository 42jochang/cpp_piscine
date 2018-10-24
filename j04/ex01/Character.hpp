/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 02:05:14 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 02:59:55 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

public:
	Character(void);
	Character(std::string const & name);
	Character(const Character &cpy);
	~Character(void);

	Character&	operator = (const Character &old);

	std::string const &	getName(void)		const;
	int					getAp(void)			const;
	AWeapon				*getWeapon(void)	const;

	void				recoverAP(void);
	void				equip(AWeapon*);
	void				attack(Enemy*);
};

std::ostream &operator << (std::ostream &output, Character const &old);

#endif

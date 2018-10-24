/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:03:08 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 05:53:47 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string weapon);
	~Weapon(void);

	std::string	getType(void) const;
	void		setType(std::string str);
};

#endif

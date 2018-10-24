/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:44:15 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 05:57:25 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA
{
private:
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void);
};

#endif

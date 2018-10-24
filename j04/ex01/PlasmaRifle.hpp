/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:57:08 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 01:28:22 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &cpy);
	virtual ~PlasmaRifle(void);
	using AWeapon::operator =;

	void	attack() const;
};

#endif

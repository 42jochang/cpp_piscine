/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:57:08 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 01:29:38 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(const PowerFist &cpy);
	virtual ~PowerFist(void);
	using AWeapon::operator =;

	void	attack() const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:42:02 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 23:01:39 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
#define	MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

#define MAX_GEAR 4

class	MiningBarge
{
private:
	MiningBarge(const MiningBarge &cpy);
public:
	MiningBarge(void);
	~MiningBarge(void);
	MiningBarge&	operator = (const MiningBarge &old);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;

	IMiningLaser	*_gear[MAX_GEAR];
};

#endif

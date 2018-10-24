/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:46:20 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 23:04:06 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void)
{
	_gear[0] = NULL;
	_gear[1] = NULL;
	_gear[2] = NULL;
	_gear[3] = NULL;
}
MiningBarge::~MiningBarge(void) { }
MiningBarge&	MiningBarge::operator = (const MiningBarge &old)
{
	_gear[0] = old._gear[0];
	_gear[1] = old._gear[1];
	_gear[2] = old._gear[2];
	_gear[3] = old._gear[3];
	return (*this);
}

void	MiningBarge::equip(IMiningLaser *l)
{
	for (int i = 0;i < 4;i++)
	{
		if (!_gear[i])
		{
			_gear[i] = l;
			return;
		}
	}
}

void	MiningBarge::mine(IAsteroid *a) const
{
	for (int i = 0;i < 4;i++)
		if (_gear[i])
			_gear[i]->mine(a);
}

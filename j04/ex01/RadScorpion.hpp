/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:52:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:10:06 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &cpy);
	virtual ~RadScorpion(void);
	using Enemy::operator =;
};

#endif

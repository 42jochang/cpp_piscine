/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:52:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:06:15 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant &cpy);
	virtual ~SuperMutant(void);
	using Enemy::operator =;

	void	takeDamage(int);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:55:49 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:59:13 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
#define IMININGLASER_HPP

#include "IAsteroid.hpp"

class	IMiningLaser
{
public:
	virtual ~IMiningLaser() { }
	virtual void mine(IAsteroid*) = 0;
};

#endif

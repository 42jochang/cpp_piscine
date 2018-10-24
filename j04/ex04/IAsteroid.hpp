/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:58:44 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:55:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <string>

class IMiningLaser;
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid(void) { }
	virtual	std::string	beMined(DeepCoreMiner *)	const = 0;
	virtual	std::string	beMined(StripMiner *)		const = 0;
	virtual	std::string	getName(void)				const = 0;
};

#endif

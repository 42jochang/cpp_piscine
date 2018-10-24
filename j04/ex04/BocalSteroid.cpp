/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:22:46 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:58:25 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid(void) : _name("BocalSteroid") { }
BocalSteroid::BocalSteroid(const BocalSteroid &cpy) : _name(cpy.getName()) { *this = cpy; }
BocalSteroid::~BocalSteroid(void) { }
BocalSteroid&	BocalSteroid::operator = (const BocalSteroid &old)
{
	(void)old;
	return (*this);
}

std::string		BocalSteroid::beMined(DeepCoreMiner *)	const { return ("Zazium"); }
std::string		BocalSteroid::beMined(StripMiner *)		const { return ("Krpite"); }
std::string		BocalSteroid::getName(void)				const { return (_name); }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:22:46 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:57:50 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal(void) : _name("AsteroBocal") { }
AsteroBocal::AsteroBocal(const AsteroBocal &cpy) : _name(cpy.getName()) { *this = cpy; }
AsteroBocal::~AsteroBocal(void) { }
AsteroBocal&	AsteroBocal::operator = (const AsteroBocal &old)
{
	(void)old;
	return (*this);
}

std::string		AsteroBocal::beMined(DeepCoreMiner *)	const { return ("Thorite"); }
std::string		AsteroBocal::beMined(StripMiner *)		const { return ("Flavium"); }
std::string		AsteroBocal::getName(void)				const { return (_name); }

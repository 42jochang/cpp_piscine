/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:05:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:14:50 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StripMiner.hpp"

StripMiner::StripMiner(void) { }
StripMiner::StripMiner(const StripMiner &cpy) { *this = cpy; }
StripMiner::~StripMiner(void) { }
StripMiner&	StripMiner::operator = (const StripMiner &old)
{
	(void)old;
	return (*this);
}

void	StripMiner::mine(IAsteroid *a)
{
	std::cout << " strip mining ... got " << a->beMined(this) << " ! *" << std::endl;
}

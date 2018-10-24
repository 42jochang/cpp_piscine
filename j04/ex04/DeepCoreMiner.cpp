/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:05:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:12:48 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) { }
DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &cpy) { *this = cpy; }
DeepCoreMiner::~DeepCoreMiner(void) { }
DeepCoreMiner&	DeepCoreMiner::operator = (const DeepCoreMiner &old)
{
	(void)old;
	return (*this);
}

void	DeepCoreMiner::mine(IAsteroid *a)
{
	std::cout << " mining deep ... got " << a->beMined(this) << " ! *" << std::endl;
}

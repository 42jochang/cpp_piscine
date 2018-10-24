/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:54:43 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:17:30 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

#define PRINT(x) std::cout << x << std::endl

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	PRINT("* click click click *");
}

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy)
{
	PRINT("* click click click *");
}

RadScorpion::~RadScorpion(void)
{
	PRINT("* SPROTCH *");
}
